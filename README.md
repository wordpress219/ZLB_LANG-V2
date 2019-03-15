# zlblangv2
The ZLB Language Version 2(Version 1 has been deprecated)
本人用cout和一些技术含量极其低下的方法处理了传入的字符串，该解释器不会解释成字节码什么东西的，更TMD不会编译成机器能识别的二进制编码，所以这个程序和用typedef给cout取了个可怕的别名没啥区别，更重要的问题在于这个东西太LOW，cout至少还有运算符的重载，这个根本就不可能会有的！如果哪个大佬能想出编码方案或者字节码的解释方法。然后像python,JAVA的垃圾回收机制我根本就不知道是怎么回事，所以更不会写。可能是传说中最LOW的将词法分析和语法分析搅和在一起的辣鸡解释器。

使用方法
如果config.txt里是1就是读取文件（打算之后解释器和读取分离）
是2的话你就是皮老板
是3的话你就是刁老板
是4的话你就是乔波学姐
是5的话你就是张老板
是2-5的话会在按下任意键后在一小时后关机
取消方法：运行（Windows键+R，苹果是Command键+R），输入shutdown -a就行了！不要害怕！
其他的就是默认交互式执行模式
我发给你们的里面写的是666，以表示我对你们的敬意！

函数列表与常见错误（原型和函数都是假的，你们懂的）

1：一个“假”输出函数tql.dpout 
原型：tql.dpout(str _str)
注意必须函数以tql.开头，不然会报错（你们自己看看就算了，这东西辣鸡的要命）
总的来说就是比如输出zlb tql!
就是tql.dpout(zlb tql!)
该函数只能单独输出字符串，不能用于输出字符/字符串变量
对了，还有一个要点，就是好像一行不能超过256个字符（一个中文算两个，连函数名称和结束符）
对于Unicode编码的支持非常垃圾，以至于处理中文有问题，没法输出，正在努力学习中

2：简单随机数发生器tql.randomn
原型：tql.randomn(int _num,int _start,int _end)
num为产生随机数的个数，start为起始数值，end为结束数值，end必须大于start
功能：产生num个范围在start-end（含）内的随机数，可能重复
基于当前系统时间产生随机数种子
错误：1.当num为非正值时，会引发参数错误E1005
2.end小于等于start时，会引发参数错误E1005

3：去冲随机数发生器tql.randome
原型：tql.randome(int _num,int _start,int _end)
num为产生随机数的个数，start为起始数值，end为结束数值，end必须大于start
功能：产生num个范围在start-end（含）内的随机数，不会重复
错误：1.当num大于end-start+1时（此时必然重复）或者num为非正值，会引发参数错误E1005
2.end小于等于start时，会引发参数错误E1005

4：变量声明与定义tql.reg（只有int,dec已完成）
原型：tql.reg(str _type,str _fuc_name,(auto)_value)
type为定义的类型，支持int整型，dec小数型，char字符型，str字符串型，zlb扩展型
fuc_name为所定义的变量的名称，只允许以英文字母，下划线开头，不能与保留标识符重复，同一个名称只能用于定义一种类型的变量
value为变量的初始值，变量在定义时必须赋初值，否则可能会在访问时触发错误，初值类型错误可能导致不可预见的后果
错误：1.当type为未定义的变量类型时，会触发参数错误E1005
2.当fuc_name与保留标识符重复时，会触发命名错误E1007
3.当一个fuc_name已被定义为一种类型时，再用同样的名称定义一个其他类型的变量或者定义一个同类型的同名变量，会触发类型错误E1009（作用有限）
4.如果一个变量名称开头有除字母和下划线以外的字符，会触发命名错误E1010
5.给小数dec类型赋整型值，会触发类型错误E1011

5.变量值的输出（int,dec完成）
原型：tql.dpvar(str _var_name)
var_name为已经定义的变量名称
功能：输出指定名称的变量的值
错误：1.尝试输出未定义的变量，会触发语法错误E1006

6.加法计算(int,dec完成)
原型：tql.add(auto _var1, auto _var2)
var1,var2为已经定义的变量名称，可以是同一个，相当于自增
功能：将数值变量var1和var2的值相加并输出
错误：1.尝试相加未定义的变量，会触发语法错误E1006
2.非相同类型相加，会触发类型错误E1012，除非强制类型转换（暂未开发到）