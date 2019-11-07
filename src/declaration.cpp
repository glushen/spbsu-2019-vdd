#include "declaration.h"

#include <utility>

vdd::Declaration::Declaration(std::vector<std::string> templateTypenames, Type type, std::unique_ptr<Declarator> declarator):
    templateTypenames(std::move(templateTypenames)),
    type(std::move(type)),
    declarator(std::move(declarator)) { }

vdd::NameDeclarator::NameDeclarator(std::string name):
    name(std::move(name)) { }

vdd::PointerDeclarator::PointerDeclarator(std::unique_ptr<Declarator> declarator):
    declarator(std::move(declarator)) { }

vdd::MemberPointerDeclarator::MemberPointerDeclarator(std::string className, std::unique_ptr<Declarator> declarator):
    className(std::move(className)),
    declarator(std::move(declarator)) { }

vdd::ArrayDeclarator::ArrayDeclarator(std::unique_ptr<Declarator> declarator, std::string count):
    declarator(std::move(declarator)),
    count(std::move(count)) { }

vdd::FunctionDeclarator::FunctionDeclarator(std::unique_ptr<Declarator> declarator, std::vector<Declaration> arguments):
    declarator(std::move(declarator)),
    arguments(std::move(arguments)) { }