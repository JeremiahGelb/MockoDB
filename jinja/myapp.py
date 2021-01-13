#! /usr/bin/env python

def run():
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("camel_case", help="CamelCase module name", type=str)
    parser.add_argument("snake_case", help="snake_case module name", type=str)
    parser.add_argument("output_dir", help="directory where new module directory will go", type=str)
    args = parser.parse_args()

    camel_case = args.camel_case
    snake_case = args.snake_case
    output_dir = args.output_dir

    import os
    module_dir = os.path.join(output_dir, snake_case)
    api_dir = os.path.join(module_dir, "api")
    impl_dir = os.path.join(module_dir, "impl")
    mock_dir = os.path.join(module_dir, "mock")
    test_dir = os.path.join(module_dir, "test")
    
    os.mkdir(module_dir)
    os.mkdir(api_dir)
    os.mkdir(impl_dir)
    os.mkdir(mock_dir)
    os.mkdir(test_dir)

    from jinja2 import Environment, FileSystemLoader, Template
    import pathlib
    jinja_dir = pathlib.Path(__file__).parent.absolute()

    print(jinja_dir)
    env = Environment(loader=FileSystemLoader(os.path.join(jinja_dir, 'templates/')))
    env.keep_trailing_newline = True

    cmake_path = os.path.join(module_dir, "CMakeLists.txt")
    with open(cmake_path, "w") as fh:
        template = env.get_template('CMakeLists.txt')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    module_path = os.path.join(api_dir, camel_case + ".hpp")
    with open(module_path, "w") as fh:
        template = env.get_template('module.hpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    module_factory_path = os.path.join(api_dir, camel_case + "Factory.hpp")
    with open(module_factory_path, "w") as fh:
        template = env.get_template('modulefactory.hpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    module_impl_hpp_path = os.path.join(impl_dir, camel_case + "Impl.hpp")
    with open(module_impl_hpp_path, "w") as fh:
        template = env.get_template('moduleimpl.hpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    module_impl_cpp_path = os.path.join(impl_dir, camel_case + "Impl.cpp")
    with open(module_impl_cpp_path, "w") as fh:
        template = env.get_template('moduleimpl.cpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case)) 
    
    module_impl_factory_path = os.path.join(impl_dir, camel_case + "Factory.cpp")
    with open(module_impl_factory_path, "w") as fh:
        template = env.get_template('moduleimplfactory.cpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    mock_module_path = os.path.join(mock_dir, "Mock" + camel_case + ".hpp")
    with open(mock_module_path, "w") as fh:
        template = env.get_template('mockmodule.hpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    mock_module_factory_path = os.path.join(mock_dir, "Mock" + camel_case + "Factory.cpp")
    with open(mock_module_factory_path, "w") as fh:
        template = env.get_template('mockmodulefactory.cpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

    test_module_path = os.path.join(test_dir, "Test" + camel_case + ".cpp")
    with open(test_module_path, "w") as fh:
        template = env.get_template('testmodule.cpp')
        fh.write(template.render(camel_case=camel_case, snake_case=snake_case))

if __name__ == "__main__":
    run()