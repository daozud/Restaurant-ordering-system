void query_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                欢迎来到查询菜品功能                  |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\n");

	while(1)
	{
		printf("\t\t\t接下来请继续选择您的操作:\n");
		printf("\t\t\t|———————————————————————————|\n");
		printf("\t\t\t|                 1   按菜名查询                       |\n");
		printf("\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t|                 2   按菜品类型查询                   |\n");
		printf("\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t|                 3   按菜品价格查询                   |\n");
		printf("\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t|                 4   返回上一级菜单                   |\n");
		printf("\t\t\t|———————————————————————————|\n");
		printf("\t\t\t请输入您的选择【1-4】：");
		scanf("%d",&sel);

		while(sel<1 || sel>4)
		{
			printf("\t\t\t输入错误，请重新输入您的选择【1-4】:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			int flag1 = 0;
			printf("\t\t\t输入您想查询的菜品名称:");
			getchar();
			gets(tem_dish.dish_name);
			printf("\t\t\t查询结果如下:\n\n");
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
				{
					flag1=1;

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

				}
			}
			if(flag1==0)
			{
				printf("\t\t\t当前菜单没有此种菜品！\n");
			}
			printf("\n");
		}
		else if(sel==2)
		{
			int flag2 = 0;
			printf("\t\t\t输入您想查询的菜品类型:");
			getchar();
			gets(tem_dish.dish_type);
			printf("\t\t\t查询结果如下:\n");
			printf("\t\t\t%-10s","序号");
			printf("%-18s","菜品名称");
			printf("%-12s","价格");
			printf("%-10s","菜品类型");
			printf("\n");
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_type, dishes[i].dish_type) == 0)
				{
					flag2=1;

					printf("\t\t\t%-10d",i+1);
					printf("%-18s",dishes[i].dish_name);
					printf("%-12.2lf",dishes[i].dish_price);
					printf("%-10s",dishes[i].dish_type);
					printf("\n");

				}
			}
			if(flag2==0)
			{
				printf("\t\t\t当前菜单没有此类菜品！\n");
			}
			printf("\n");
		}
		else if(sel==3)
		{
			int flag3 = 0,sell;
			printf("\t\t\t您可以进行如下选择:\n");
			printf("\t\t\t|————————————|\n");
			printf("\t\t\t|      1 ￥40以下        |\n");
			printf("\t\t\t|      2 ￥41-80         |\n");
			printf("\t\t\t|      3 ￥81-120        |\n");
			printf("\t\t\t|      4 ￥120以上       |\n");
			printf("\t\t\t|————————————|\n");
			printf("\t\t\t请输入您的选择【1-4】：");
			scanf("%d",&sell);
			while(sell<1 || sell>4)
			{
				printf("\t\t\t输入错误，请重新输入您的选择【1-4】:");
				scanf("%d",&sell);
			}
			printf("\t\t\t查询结果如下:\n");
			printf("\t\t\t%-10s","序号");
			printf("%-18s","菜品名称");
			printf("%-12s","价格");
			printf("%-10s","菜品类型");
			printf("\n");

			if(sell==1)
			{
				for(i=0; i<H; i++)
				{
					if (dishes[i].dish_price>0 && dishes[i].dish_price<=40)
					{
						printf("\t\t\t%-10d",i+1);
						printf("%-18s",dishes[i].dish_name);
						printf("%-12.2lf",dishes[i].dish_price);
						printf("%-10s",dishes[i].dish_type);
						printf("\n");
					}
				}
			}
			else if(sell==2)
			{
				for(i=0; i<H; i++)
				{
					if (dishes[i].dish_price>40 && dishes[i].dish_price<=80)
					{
						printf("\t\t\t%-10d",i+1);
						printf("%-18s",dishes[i].dish_name);
						printf("%-12.2lf",dishes[i].dish_price);
						printf("%-10s",dishes[i].dish_type);
						printf("\n");
					}
				}
			}
			else if(sell==3)
			{
				for(i=0; i<H; i++)
				{
					if (dishes[i].dish_price>80 && dishes[i].dish_price<=120)
					{
						printf("\t\t\t%-10d",i+1);
						printf("%-18s",dishes[i].dish_name);
						printf("%-12.2lf",dishes[i].dish_price);
						printf("%-10s",dishes[i].dish_type);
						printf("\n");
					}
				}
			}
			else if(sell==4)
			{
				for(i=0; i<H; i++)
				{
					if (dishes[i].dish_price>120)
					{
						printf("\t\t\t%-10d",i+1);
						printf("%-18s",dishes[i].dish_name);
						printf("%-12.2lf",dishes[i].dish_price);
						printf("%-10s",dishes[i].dish_type);
						printf("\n");
					}
				}
			}

		}
		else if(sel==4)
		{
			filesave();
			admin_menu();
		}
		printf("\n");
	}
}
