# LaTeX���а����

## Texlive2015

һ���ƽ̨Latex���а�

* ��Windowsϵͳ��, ���غ�����install-tl-advanced.bat���а�װ��  
* �ڰ�װ������У����Խ�����Ҫ�����԰�ȥ����  
* TeXworks Editor ��һ��LaTeX�༭��������ȥ����  
* �����ı���Ĭ�ϼ��ɡ�  

## ����TeXLive��װ�Ƿ�ɹ�

> tex -v  
> latex -v  
> xelatex -v  

�鿴��װ�汾

## �汾����

> tlmgr update --all

## TeXstudio

### �޸����Ի���

> Options - Configure TeXstudio - General - Language 

### ��������빹��

> Options - Configure TeXstudio - Commands / Build

����ʹ��xelatex��ΪĬ�ϱ�����, �Է���֧������.  
����F5���Խ��б���Ͳ鿴.

### �½��ļ�

����TeXStudio��Ϊ�༭�����½��ļ��������Ӣ��, ��һ���ļ���÷ŵ�������һ��Ŀ¼�С�

### �ṹ��ͼ

�˵��У������鿴- �ṹ������ʾ


### BibTeX��ʹ��

BibTeX:  
> Options - Configure TeXstudio - Build - Ĭ�����׹��� - BibTex  

BibLaTeX:  
> Options - Configure TeXstudio - Build - Ĭ�����׹��� - Biber  

�������ļ���  
���� - �������ļ�

## ��ȡ����

> texdoc ctex  
�鿴ctex��ʹ���ĵ�

> texdoc lshort-zh  
�鿴latex��ʹ�ý̳�.  

> texdoc graphicx
�鿴��ͼ˵��

# Tex��������ʹ�÷���

TexԴ�ļ����ı��ļ�����������Notepad, vim���ı��༭�����й�����

## ��дTex�ĵ�

```
\documentclass{article}

\begin{document}

Hello, \LaTeX .

\end{document}

```
## ����

### latex����

����:  

> letax hello.tex  

תpdf:  

> dvipdfmx hello.dvi  

### xelatex����

����ֱ��ֱ�ӱ����pdf  
xelatex֧��UTF-8��֧������  

> xelatex hello.tex  

### �����������ļ����б���

```
latex hello.tex
dvipdfmx hello.dvi
del *.aux *.dvi *.log

```

����


```
xelatex hello.tex
del *.aux *.dvi *.log
```

�������뱣��Ϊbuild.bat, ���м��ɱ���

## ��tex֧������

��Ҫ����xelatex���ctex���֧������.

1. �����ĵ��������UTF-8���б���(��TexStudio�����½ǿ��Խ�������)  
2. ���ĺ����\usepackage{ctex}  
3. ����ʹ��xelatex���б���.  


# Latex�ĵ��Ļ����ṹ

## ������

��������Ҫ�����ĵ���ȫ�ֻ���.

documentclass:

* article - ����/����  
* book - ͼ��  
* report - ����  
* letter - �ż�  

## ������

��һ��tex�ĵ��У�����ֻ��һ��document����.

# How to put an animation into a beamer

1. Please download and install ImageMagick with convert tools.
2. "C:\Program Files\ImageMagick-7.0.7-Q16\convert.exe" animate.gif -coalesce a_%d.eps
3. use the packages:
\usepackage{graphicx}
\usepackage{animate}
4. use the following to insert animation:
\animategraphics[autoplay,loop,controls,width=.7\textwidth,height=.7\textheight]{1}{a_}{0}{43} % 1 means image number per sec, 0-43 means the first and last number of images, a_ is the perfix

