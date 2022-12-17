# OCT_GUI

这个是一个或多个C++初学者编写的基于win32API的第三方GUI库  
本GUI库将以动态链接库的形式被编写和编译.  
当前库未完成编写  基础功能和底层代码没有完善  
基础功能不全  

## 子项目介绍

- OCT_GUI  
    主要项目,用于实现主要逻辑代码.  
    程序调用的入口函数将在这里实现.  
    当前真正导出的函数只有一个测试函数 `test`  
    test函数签名: ` void test(LPCSTR text); `  

- GUI_lib  
    当前用来存放窗口过程的子项目  

- DLL_test  
    用于测试编译的DLL文件是否可以正常运行.  

- share  
    共享项目,当前用于存放多个子项目都会用到的资源和头文件  

## 项目使用  

- 什么是DLL?  
    在使用DLL之前您可能需要了解什么是DLL文件  
    您可以 [点击这里](https://learn.microsoft.com/zh-cn/troubleshoot/windows-client/deployment/dynamic-link-library "什么是DLL --Microsoft") 跳转到Microsoft官方的文档解释.

- 静态链接使用  
    - DLL库正在开发,暂时无法提供使用方法.  

- 动态链接使用
    - 动态链接使用

## 开发人员

- ourcwj  
    - 简介:  
        个人开发者,当前主要学习 ` C++ ` ,辅语言 ` Python `.  
        个人开发经验较少,使用Microsoft的VS IDE环境.  
    - 联系方式:  
        - E-mail_01: <cwj1485678001scp@outlook.com>  
        - E-mail_02: <ourcwj@ourcwj.tk>       
        - E-mail_03: <1961894636@qq.com>  
        - E-mail_04: <qwe1485678@163.com>  
        - E-mail_05: <qwe1485678@gmali.com>  
        - QQ: 1961894636

- DrXuddd  
    暂无,等待此开发者补充  

## 开源协议

本项目使用**MIT开源许可证**  
本项目允许被传播,使用,及商用. 但请注明来源  
本项目开发人员**只有**开发和维护本项目的义务.**不承担**因为使用本项目而造成的**任何损失**  

---

> 如果因为使用本项目造成的**任何形式**的后果或损失, 本项目开发人员将给予**不影响正常生活**的最大限度的帮助, 但不承担**任何**形式的责任.  

> 本项目允许传播,但请**注明来源及开发者**  

> Copyright (c) 2022 车文竣
