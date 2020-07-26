# makefile_template
Makefile模板

# Makefile组织工程的类型
## (1)单目录单个Makefile
比较常规，不做介绍。

## (2)多目录单个Makefile
template02目录格式如下：
.
├── main.c
├── Makefile
├── src
│   ├── business.c
│   ├── business.h
│   ├── intelligent.c
│   ├── intelligent.h
│   └── model
│       ├── module.c
│       └── module.h
└── utils
    ├── mystring.c
    └── mystring.h

使用这种方式Makefile在工程的顶层目录，源文件分布在不同的目录下面，所以在编写Makefile时可以直接指
明文件路径。

## (3)多目录多个Makefile




# Makefile基础知识
