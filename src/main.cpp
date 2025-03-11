#include "type.h"
#include "code_gen.h"
#include "ast.h"
#include "grammar.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>  
#include <stdlib.h>  
#include <fcntl.h>  
#include <stdio.h>

extern Node *ROOT;
extern codeGen *generator;
extern int yyparse();
void dfs(Node *root,int n);

int main() {
    yyparse();
    // auto root = ROOT->jsonGen();

    //string jsonFile = "../visualization/ast_tree.json";
    //std::ofstream astJson(jsonFile);
    // if(astJson.is_open()){
        // astJson << root;
        // astJson.close();
        //cout << "json write to " << jsonFile << endl;
    // }


    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();
    generator = new codeGen();
    generator->generate(ROOT);

    // dfs(ROOT,0);




    // std::ofstream output("output.txt");  
    // if (!output) {  
    //     std::cerr << "Error: could not open output file 'output.txt'" << std::endl;  
    //     return 1;  
    // }
    // string s = ROOT->nodeType;
    // cout << (ROOT->nodeType)<< endl;  
    // cout<<ROOT->nodeType<<endl;
    // int fd = open("output.txt");  
    // if (fd == -1) {  
    //     perror("open");  
    //     return 1;  
    // }

    // // printf("Hello, world!\n"); 
    // fprintf(fd, "%s", "Hello, world!\n");

    // fprintf("%s",ROOT->nodeType);
    // close(fd);
    // output.close();

    return 0;
}

void dfs(Node *root,int n){
     if (!root) {  
        return;  
    }  
    int num;
    num = root->childNum;
    
    if(num==0) {
        for(int j=0;j<n-1;j++){
            printf(" ");
        }
        printf("->%s\n",root->nodeType);
    }
    else{
        n++;
        for(int j=0;j<n-1;j++){
            printf(" ");
        }
        printf("->%s\n",root->nodeType);
        for(int i=0;i<num;i++){
            // printf("->");
            dfs(root->childNode[i],n);
        }

    }


}