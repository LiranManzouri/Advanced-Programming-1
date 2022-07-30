//
// Created by liran on 30/07/2022.
//

#include "Main.h"
#include "CreateClassifiedFiles.h"

int main(int argc, char *argv[]) {
    CreateClassifiedFiles createClassifiedFiles = CreateClassifiedFiles(stoi(argv[1]));
    createClassifiedFiles.createClassified();
}