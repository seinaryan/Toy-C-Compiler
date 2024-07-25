#include <iostream>
#include "node.h"
#include "llvm/Config/llvm-config.h" 
extern NBlock* programBlock;
extern int yyparse();

int main(int argc, char **argv)
{
    yyparse();
    std::cout << programBlock << std::endl;
    return 0;
}