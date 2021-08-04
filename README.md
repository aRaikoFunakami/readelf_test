# readelf_test

```
$ tree .
.
├── b.c
├── dir
│   └── c.c
├── main.c
└── README.md

1 directory, 4 files
$ gcc -g3 main.c b.c dir/c.c
$ ./a.out 
i = 11
$ readelf -w a.out | grep filename | grep -v "\.h"
 DW_MACRO_start_file - lineno: 0 filenum: 1 filename: main.c
 DW_MACRO_start_file - lineno: 0 filenum: 1 filename: b.c
 DW_MACRO_start_file - lineno: 0 filenum: 1 filename: dir/c.c
$ 
```