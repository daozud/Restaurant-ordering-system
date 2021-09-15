#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "windows.h"
#include "结构体.h"
#include "文件读取.h"
#include "文件保存.h"
#include "显示当前菜单.h"
#include "增加菜品.h"
#include "删除菜品.h"
#include "查询菜品.h"
#include "修改菜品.h"
#include "显示餐桌状态.h"
#include "修改餐桌状态.h"
#include "客户端点餐.h"
#include "客户端支付.h"
#include "管理端登录.h"
#include "管理端注册.h"
#include "管理端界面.h"
#include "主菜单.h"
int main(void)
{
	system("color 70");
	fileread();
	menu();
	return 0;
}
