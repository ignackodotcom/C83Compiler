# C83Compiler

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

compiler identification macros

<br>

Example of use
```c
    printf("COMPILER test\n\r");
    printf("\n\r");

    printf("C83COMPILER_VERSION()       = %ld\n\r", C83COMPILER_VERSION());
    printf("\n\r");

    printf("First COMPILER              = %d\n\r", COMPILER_8CC);
    printf("First COMPILER NAME         = %s\n\r", COMPILER_8CC_NAME);
    printf("\n\r");

    printf("Last COMPILER               = %d\n\r", COMPILER_ZORTECH_CPP);
    printf("Last COMPILER NAME          = %s\n\r", COMPILER_ZORTECH_CPP_NAME);
    printf("\n\r");

    printf("Current COMPILER            = %d\n\r", COMPILER);
    printf("Current COMPILER NAME       = %s\n\r", COMPILER_NAME);
    printf("\n\r");
```

Another example of use
```c
    #if COMPILER == 0
        #error "Unknown compiler"
    #endif

    #if COMPILER == COMPILER_GCC_CCPP
        ...
        Gcc compiler code
        ...
    #elif COMPILER == COMPILER_MICROSOFT_VISUAL_CCPP
        ...
        Visual studio compiler code
        ...
    #else
        ...
        other compiler code
        ...
    #endif
```

# Note:
It is completely impossible to fully test all compiler combinations, 
so this library is not fully tested. If you have any improvements, 
please feel free to contact me.


# Updates
<br>
