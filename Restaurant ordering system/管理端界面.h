
int admin_menu()
{
	system("cls");
	int sel;

	printf("\t\t\t****************欢迎您！尊贵的系统管理员****************\n\n");
	printf("\t\t\t请选择您的操作:\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                1   显示当前菜单                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                2   增加菜品                          |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                3   删除菜品                          |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                4   查询菜品                          |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                5   修改菜品                          |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                6   显示餐桌状态                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                7   修改餐桌状态                      |\n");//这个功能实际上是从管理端进行支付
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                0   注销登录                          |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t请输入您的选择【0-7】：");
	scanf("%d", &sel);
	getchar();
	while (sel<0 || sel>7)
	{
		printf("\t\t\t输入错误,请重新输入你的选择【0-7】：");
		scanf("%d", &sel);
	}

	switch (sel)
	{
		case 1:
			show_dish();
			admin_menu();
			break;
		case 2:
			add_dish();
			break;
		case 3:
			delete_dish();
			break;
		case 4:
			query_dish();
			break;
		case 5:
			modify_dish();
			break;
		case 6:
			show_table();
			admin_menu();
			break;
		case 7:
			modify_table();
			break;
		case 0:
			menu();
	}
}
