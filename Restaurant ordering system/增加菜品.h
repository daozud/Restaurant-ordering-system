void add_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                欢迎来到增加菜品功能                  |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\n");
	for(i=0; i<H; i++)
	{
		if(strcmp(dishes[i].dish_name,"")==0)
		{
			printf("\t\t\t接下来请继续选择您的操作:\n");
			printf("\t\t\t|------------------------|\n");
			printf("\t\t\t|   1 增加菜品           |\n");
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
				printf("\t\t\t输入菜品名称:");
				getchar();
				gets(tem_dish.dish_name);
				printf("\t\t\t输入菜品价格:");
				scanf("%lf", &tem_dish.dish_price);
				printf("\t\t\t输入菜品类型:");
				getchar();
				gets(tem_dish.dish_type);
				for (i = 0; i < H; i++)
				{
					if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
					{
						printf("该菜品已存在,无需重复添加！\n");
						flag = 1;
						break;
					}
				}
				if (flag == 0)
				{
					for (i = 0; i < H; i++)
					{
						if (strcmp(dishes[i].dish_name,"") == 0)
						{
							dishes[i]=tem_dish;
							printf("\t\t\t添加成功！\n");
							break;
						}
					}
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
}
