void modify_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                欢迎来到修改菜品功能                  |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\n");

	while(1)
	{
		printf("\t\t\t接下来请继续选择您的操作:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 修改菜品           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 返回上一级菜单     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t请输入您的选择【1-2】：");
		scanf("%d",&sel);

		while(sel<1 || sel>2)
		{
			printf("\t\t\t输入错误，请重新输入您的选择【1-2】:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			int flag = 0;
			printf("\t\t\t输入您想修改的菜品名称:");
			getchar();
			gets(tem_dish.dish_name);
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
				{
					flag=1;
					printf("\t\t\t输入修改后的的菜品名称:");
					gets(tem_dish.dish_name);
					printf("\t\t\t输入修改后的菜品价格:");
					scanf("%lf", &tem_dish.dish_price);
					printf("\t\t\t输入修改后的菜品类型:");
					getchar();
					gets(tem_dish.dish_type);
					dishes[i]=tem_dish;//赋值
					printf("\t\t\t修改成功！\n");
					break;
				}
			}
			if(flag==0)
			{
				printf("\t\t\t当前菜单没有此种菜品！\n");
			}
			filesave();
		}
		else if(sel==2)
		{
			filesave();
			admin_menu();
		}
	}
}
