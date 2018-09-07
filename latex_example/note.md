# LaTeX发行版软件

## Texlive2015

一款跨平台Latex发行版

* 在Windows系统中, 下载后运行install-tl-advanced.bat进行安装。  
* 在安装的组件中，可以将不需要的语言包去掉。  
* TeXworks Editor 是一个LaTeX编辑器，可以去掉。  
* 其他的保持默认即可。  

## 测试TeXLive安装是否成功

> tex -v  
> latex -v  
> xelatex -v  

查看安装版本

## 版本更新

> tlmgr update --all

## TeXstudio

### 修改语言环境

> Options - Configure TeXstudio - General - Language 

### 编译参数与构建

> Options - Configure TeXstudio - Commands / Build

建议使用xelatex作为默认编译器, 以方便支持中文.  
按下F5可以进行编译和查看.

### 新建文件

利用TeXStudio作为编辑器，新建文件名最好用英文, 且一个文件最好放到单独的一个目录中。

### 结构视图

菜单中，单击查看- 结构进行显示


### BibTeX的使用

BibTeX:  
> Options - Configure TeXstudio - Build - 默认文献工具 - BibTex  

BibLaTeX:  
> Options - Configure TeXstudio - Build - 默认文献工具 - Biber  

清理辅助文件：  
工具 - 清理辅助文件

## 获取帮助

> texdoc ctex  
查看ctex的使用文档

> texdoc lshort-zh  
查看latex简单使用教程.  

> texdoc graphicx
查看插图说明

# Tex的命令行使用方法

Tex源文件是文本文件，可以利用Notepad, vim等文本编辑器进行工作。

## 编写Tex文档

```
\documentclass{article}

\begin{document}

Hello, \LaTeX .

\end{document}

```
## 编译

### latex编译

编译:  

> letax hello.tex  

转pdf:  

> dvipdfmx hello.dvi  

### xelatex编译

可以直接直接编译成pdf  
xelatex支持UTF-8，支持中文  

> xelatex hello.tex  

### 利用批处理文件进行编译

```
latex hello.tex
dvipdfmx hello.dvi
del *.aux *.dvi *.log

```

或者


```
xelatex hello.tex
del *.aux *.dvi *.log
```

上述代码保存为build.bat, 运行即可编译

## 让tex支持中文

需要利用xelatex结合ctex宏包支持中文.

1. 首先文档必须采用UTF-8进行编码(在TexStudio的右下角可以进行设置)  
2. 中文宏包：\usepackage{ctex}  
3. 必须使用xelatex进行编译.  


# Latex文档的基本结构

## 导言区

导言区主要定义文档的全局环境.

documentclass:

* article - 论文/文章  
* book - 图书  
* report - 报告  
* letter - 信件  

## 正文区

在一个tex文档中，有且只有一个document环境.

# How to put an animation into a beamer

1. Please download and install ImageMagick with convert tools.
2. "C:\Program Files\ImageMagick-7.0.7-Q16\convert.exe" animate.gif -coalesce a_%d.eps
3. use the packages:
\usepackage{graphicx}
\usepackage{animate}
4. use the following to insert animation:
\animategraphics[autoplay,loop,controls,width=.7\textwidth,height=.7\textheight]{1}{a_}{0}{43} % 1 means image number per sec, 0-43 means the first and last number of images, a_ is the perfix

