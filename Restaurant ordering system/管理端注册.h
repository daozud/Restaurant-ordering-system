void admin_registers()
{

	system("cls");
	int i,sel;
	struct admin temAdmin;

	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                      欢迎来到                        |\n");
	printf("\t\t\t|           |霍格沃茨点餐系统管理员注册界面|           |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  1   开始注册                        |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  2   返回上一级菜单                  |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t请输入您的选择【1-2】：");
	scanf("%d",&sel);
	getchar();
	while (sel<1 || sel>2)
	{
		printf("\t\t\t输入错误,请重新输入您的选择【1-2】：");
		scanf("%d", &sel);
	}
	if(sel==1)
	{
		printf("\t\t\t-------------------------------------------\n");
		printf("\t\t\t请填写注册信息:\n");
		printf("\t\t\t-------------------------------------------\n");
		printf("\t\t\t输入用户名:");
		gets(temAdmin.admin_account);
		printf("\t\t\t输入密码:");
		gets(temAdmin.admin_password);
		for (i = 0; i < M; i++)
		{
			while (strcmp(admins[i].admin_account, temAdmin.admin_account)==0)
			{
				//如果不是可以使用的用户名，直接退出注册，返回到主界面
				printf("\t\t\t-------------------------------------------\n");
				printf("\t\t\t该用户名已被注册！请重新填写注册信息:\n");
				printf("\t\t\t-------------------------------------------\n");
				printf("\t\t\t输入用户名:");
				gets(temAdmin.admin_account);
				printf("\t\t\t输入密码:");
				gets(temAdmin.admin_password);
			}
		}
		for (i = 0; i < M; i++)
		{
			if (strcmp(admins[i].admin_account,"")==0)
			{
				admins[i]=temAdmin;
				break;
			}
		}
		printf("\t\t\t注册成功！！！\n");
	}
	else if(sel==2)
	{
		menu();
	}

	//因为新用户注册成功，所以用户注册信息需要重新全部保存
	filesave();
	printf("\t\t\t");
	system("pause");
	menu();
}
