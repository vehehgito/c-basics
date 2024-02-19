# c-basics

## Trying to refresh my own C lang basics.

There are **4 stages** to the compilation process:
1. Preprocessing (performed by the Preprocessor)
2. Compilation (performed by the Compiler)
3. Assembling (performed by the Assembler)
4. Linking (performed by the Linker)

### Preprocessing

It can be assigned directives via the source code, using code preceded by a hash sign (#). Commands preceded by a hash sign in the source code in this manner are referred to as a **Preprocessor Directive**. Two of the most common Preprocessor Directives are "include" and "define". Using the clang flag `-E`, you can compile using only the Preprocessor. 

```shell 
$ clang -E hello.c 
```

### Compilation 

This second stage is where clang actually transforms C source code into assembly code. In order to have clang convert your C into assembly, but proceed no further, use the `-S` flag.

```shell
 $ clang -S hello2.c
```

### Assembling 
It is the Assemblers job during this third stage of clang's compile process to convert the assembly code we just viewed and discussed into "machine code". To wit, the Assembler does not provide Assembly as output. Assembly code is provided to the Assembler as input, and the Assembler provides *machine code* as output.

Using `clang -c` we can use the Assembler to parse code that has been translated into assembly. This will result in a file with the *.o extension. Note that if you have been following along, you will be performing this step to `hello2.s`, and not `hello2.c`.

```shell
 $ clang -c hello2.s
```

### Linking 
Linking is the fourth and final step of the clang compile process. Linking combines a multitude of object files into one big file that you can actually execute. Linking is very system-dependent, so the easiest way to link object files together is to call clang on all of the different files that you wish to link together. If you specify *.o files, than clang will know that it can skip Preprocessing, Compiling and Assembling and get straight to the Linking.

Specifying several *.o files can be done by specifying the files along with any libraries which were being utilised, simply by using the `-l` flag at the end.
```shell
 $ clang hello.o hello2.o hello3.o -lmath
```