void delete_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                欢迎来到删除菜品功能                  |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\n");

	while(1)
	{
		printf("\t\t\t接下来请继续选择您的操作:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 删除菜品           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 返回上一级菜单     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t请输入您的选择【1-2】：");
		scanf("%d",&sel);

		while(sel<1 || sel>2)
		{
			printf("\t\t\t输入错误，请重新输入您的选择【1-2】：");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			int flag = 0,sell;
			printf("\t\t\t输入您想删除的菜品名称:");
			getchar();
			gets(tem_dish.dish_name);
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
				{
					flag=1;
					printf("\t\t\t该菜品信息如下:\n");

					printf("\t\t\t%-10s","序号");
					printf("%-18s","菜品名称");
					printf("%-12s","价格");
					printf("%-10s","菜品类型");
					printf("\n");
					printf("\t\t\t%-10d",i+1);
					printf("%-18s",dishes[i].dish_name);
					printf("%-12.2lf",dishes[i].dish_price);
					printf("%-10s",dishes[i].dish_type);
					printf("\n");
					break;
				}
			}
			printf("\t\t\t|————————————|\n");
			printf("\t\t\t|      1 确定删除        |\n");
			printf("\t\t\t|      2 放弃删除        |\n");
			printf("\t\t\t|————————————|\n");
			printf("\t\t\t请输入您的选择【1-2】：");
			scanf("%d",&sell);
			while (sell<1 || sell>2)
			{
				printf("输入错误,请重新输入您的选择【1-2】：");
				scanf("%d", &sell);
			}
			if(sell==1)
			{
				if(i==H-1)
				{
					strcpy(dishes[i].dish_name,"");
					dishes[i].dish_price=0;
					strcpy(dishes[i].dish_type,"");
				}
				else
				{
					int j;
					for(j=i+1; j<H; j++)
						dishes[j-1]=dishes[j];
				}

				printf("\t\t\t该菜品信息已经删除\n");
				filesave();


				if(flag==0)
				{
					printf("当前菜单没有此种菜品！\n");
				}
				filesave();
			}
		}
		else if(sel==2)
		{
			filesave();
			admin_menu();
		}

	}
}
