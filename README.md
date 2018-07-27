<h1 align="center">Nonogram</h1>

项目基于 <a href="https://www.qt.io/">Qt</a> 框架制作。

## 说明

1. `build_inc.bat` 用于更新 build 号，应在编译步骤最开始执行，否则 build 号不会更新。该文件工作目录应为 `%{CurrentProject:Path}/tool` 。

2. `style` 目录下的 `styles` 文件夹需要放在 编译后的\*.exe 同级目录下，否则会出现样式错误。

3. 本程序采用 Qt 5.9.6 + MinGW 5.3.0 32bit 编译测试通过。由于文件编码问题，使用 MSVC 编译可能会出现中文不能正常显示的 BUG 。

4. 请在全英文无空格路径下编译，否则可能出错。

5. 如果游戏出现显示大小不正常（ DPI 显示问题），请右键单击应用程序->属性->兼容性，勾选“替代高 DPI 缩放行为”，再尝试运行。


## 已知BUG

1. 某些情况下，在游戏界面点击返回，会出现主界面弹出但不能前置显示的问题（藏在其他窗口后面）。此时手动最小化窗口再最大化窗口即可解决问题。

## 更新记录

### 2.8

##### -2.8.0.3 Release-
[第五个发布版本]
- 修改：重构代码，优化代码风格
- 修改：使游戏兼容 Qt 5.9.6
- BUG修复：游戏窗口距离屏幕上沿的最小边距不正确
- BUG修复：在分割线上或者提示区开始拖动会出现十字高亮残留

### 2.7

##### -2.7.4.0 Release-
[第四个发布版本]
- 新增：有存档存在时开始新游戏会出现确认对话框
- 修改：修改部分文字表述

##### -2.7.3.1 Release-
[第三个发布版本]
- 修改：移除冗余代码，提升游戏运行效率
- 修改：移除游戏完成界面的占位符
- BUG修复：游戏结束后光标样式不能还原
- BUG修复：在上个版本中版本号显示出错

##### -2.7.2.2-
- 新增：游戏界面出现的位置能够随主界面的位置改变而改变，且不会超出屏幕显示范围
- 新增：新增对话框弹出时的动画效果
- BUG修复：对话框弹出时位置不正确（有微小的向左偏移）

##### -2.7.1.2-
- 修改：更改╳号字体为“宋体”
- 修改：加深不可用按钮的颜色
- BUG修复：Windows 7系统上字体丢失
- BUG修复：Windows 7系统上光标有不正常黑线
- BUG修复：滚动条上光标样式错误

##### -2.7.0.0-
- 修改：将图片“公鸡 [10x10]”替换为“音符 [10x10]”
- 修改：将图片“鹿 [15x15]”替换为“Android [15x20]”
- 修改：将图片“测试：脸”替换为“测试：拉里·奥布莱恩杯”
- BUG修复：若某一行（列）没有提示则不能正确判断游戏结束
- BUG修复：游戏完成后存档不能被正确清空

### 2.6

##### -2.6.9.0-
- 新增：加入模态对话框失去焦点后的边框闪烁效果

##### -2.6.8.3-
- 新增：游戏界面会按需显示三种不同的鼠标指针
- 修改：修改关于文字
- 修改：修改帮助文字
- 修改：减小工具按钮图标大小
- 修改：叉号由✕变为╳

##### -2.6.7.0-
- 修改：修改游戏完成界面样式

##### -2.6.6.0-
- 修改：去除代码冗余
- BUG修复：数个小问题

##### -2.6.5.0-
- BUG修复：不同系统缩放倍率下游戏字体大小不正常

##### -2.6.4.0-
- 修改：缩小字体文件大小

##### -2.6.3.0-
- 新增：拖动时显示拖动区域大小
- 修改：多处 UI 调整

##### -2.6.2.0 Release-
[第二个发布版本]

##### -2.6.1.0-
- 新增：添加对话框边框新样式
- 修改：小幅度调整布局间隔
- BUG修复：有几处对话框样式缺失

##### -2.6.0.0 Release-
[第一个发布版本]

### 2.5

##### -2.5.2.0-
- 新增：统一对话框样式

##### -2.5.1.0-
- 修改：修改按钮高度
- 修改：修改小按钮样式
- 修改：重新绘制游戏图标

##### -2.5.0.0-
- 新增：大幅度修改 UI

### 2.4

##### -2.4.5.0-
- 新增：新增完成效果预览窗口边框
- 新增：在游戏的多处显示 Logo
- 修改：用数字表示图片大小

##### -2.4.3.0-
- 修改：修改主界面样式
- 修改：按钮字体加粗

##### -2.4.2.0-
- 修改：游戏完成后移除帮助按钮

##### -2.4.1.0-
- 新增：build 号显示功能
- 修改：通过合并 .png 文件缩小可执行文件大小

### 2.3

##### -2.3.6.0-
- BUG修复：调整了窗口显示逻辑，避免窗口闪烁和窗口位置不正

##### -2.3.5.1-
- 修改：重新绘制游戏图标
- 修改：修改字体样式

##### -2.3.4.0-
- 修改：修改工具按钮图标
- 修改：修改帮助对话框样式

##### -2.3.3.0-
- 新增：新增了两款外部字体
- 修改：修改部分字体与按钮的大小和样式
- 修改：修改布局间隔

##### -2.3.2.0-
- BUG修复：点击重置按钮后存档不能被正确清空

##### -2.3.1.0-
- BUG修复：载入游戏后重置按钮无法使用

##### -2.3.0.0-
- BUG修复：某些情况下窗口不能前置显示
- BUG修复：当点击返回再点击取消主界面会错误弹出
- BUG修复：两个鼠标按键一起按游戏反应不正常

### 2.2

##### -2.2.3.0-
- BUG修复：点击返回后主界面先于确认保存对话框显示

##### -2.2.1.0-
- 新增：新增读取游戏和保存游戏的功能

### 2.1

##### -2.1.2.0-
- 修改：修改布局间隔

##### -2.1.1.0-
- 修改：去除完成游戏界面的工具栏

##### -2.1.0.0-
- 新增：美化游戏完成界面，只留下图片本身而不显示线框

### 2.0

##### -2.0.1.0-
- 新增：新增完成效果预览窗口

### 1.9

##### -1.9.3.0-
- 新增：新增退出键

##### -1.9.0.0-
- BUG修复：区域高亮逻辑中的多处严重错误

### 1.7

##### -1.7.5.0-
- 新增：新增已完成区块显示功能
- 新增：现在能够正常判断游戏结束

### 1.6

##### -1.6.0.0-
- 新增：新增拖动填充功能
- 新增：十字高亮中心能够在非点击状态随鼠标移动

### 1.5

##### -1.5.1.0-
- 修改：修改帮助文字

##### -1.5.0.0-
- 新增：新增撤销与重做功能
- 修改：修改重置按钮功能

### 1.1

##### -1.1.0.0-
- 新增：完成最基础的游戏功能
- 新增：新增十字高亮功能

### 1.0

##### -1.0.0.0-
- 新增：完成最基础的 UI
