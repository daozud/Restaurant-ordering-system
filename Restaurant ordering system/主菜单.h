int menu()
{
	int sel;
	system("cls");


	printf("\t\t\t*****************欢迎来到霍格沃茨点餐系统***************\n");
	printf("\t\t\t请选择您的操作:\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                  1   管理端登录                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  2   管理端注册                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  3   客户端点餐                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  4   客户端支付                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  0   退出                            |\n");
	printf("\t\t\t|———————————————————————————|\n");

	printf("\t\t\t请输入您的选择【0-4】：");
	scanf("%d", &sel);
	getchar();
	while (sel<0 || sel>4)
	{
		printf("\t\t\t输入错误,请重新输入您的选择【0-4】：");
		scanf("%d", &sel);
	}

	switch (sel)
	{
		case 1:
			admin_login();
			break;
		case 2:
			admin_registers();
			break;
		case 3:
			customer_order();
			menu();
			break;
		case 4:
			customer_pay();
			break;
		case 0:
			exit(0);
	}
}
