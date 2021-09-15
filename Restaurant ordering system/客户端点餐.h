void customer_order()
{

	system("cls");
	int i,sell,sel,j=0,flag=0,k=0;
	double sum=0;
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t|                     尊贵的上帝                       |\n");
	printf("\t\t\t|                 欢迎光临霍格沃茨餐厅！               |\n");
	printf("\t\t\t|———————————————————————————|\n");
	printf("\t\t\t本餐厅菜单如下：\n");
	printf("\t\t\t|----------------------------------------------------|\n");
	printf("\t\t\t| %-10s","序号");
	printf("%-18s","菜品名称");
	printf("%-12s","价格");
	printf("%-10s |","菜品类型");
	printf("\n");
	printf("\t\t\t|----------------------------------------------------|\n");
	for(i=0; i<H; i++)
	{
		if(strcmp(dishes[i].dish_name,"")!=0)
		{
			printf("\t\t\t| %-10d",i+1);
			printf("%-18s",dishes[i].dish_name);
			printf("%-12.2lf",dishes[i].dish_price);
			printf("%-10s |",dishes[i].dish_type);
			printf("\n");
			printf("\t\t\t|----------------------------------------------------|\n");
		}
		else
			break;
	}
	printf("\t\t\t以下编号餐桌目前空置，可供您落座：\n");
	printf("\t\t\t--------------------------------------------------------------------------------\n");
	printf("\t\t\t");
	for(i=0; i<N; i++)
	{
		if(tables[i].state==0)
		{
			printf("%-4d",i+1);
			j++;
			if(j%20==0)
			{
				printf("\n\t\t\t--------------------------------------------------------------------------------\n\t\t\t");
			}
			k++;
		}
	}
	if(k%20!=0)
	{
		printf("\n\t\t\t--------------------------------------------------------------------------------\n");
	}//调整运行框里的显示界面样式的  没啥用处，加了好看点

	while(1)
	{
		printf("\n");
		printf("\t\t\t接下来请继续您的操作:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 开始点餐           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 返回上一级菜单     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t请输入您的选择【1-2】：");
		scanf("%d",&sell);
		while(sell<1 || sell>2)
		{
			printf("\t\t\t输入错误，请重新输入您的选择【1-2】:");
			scanf("%d",&sell);
		}


		if(sell==1)
		{
			/*
			struct table
			{
				int table_number;//餐桌号
				int dish_number;//本餐桌的菜品数量
				int meal_number;//用餐人数
				int state;//是否结账 默认的0代表已结账
			};
			struct table tables[N];
			*/

			struct table tem_table;
			printf("\t\t\t请输入您中意的餐桌号：");
			scanf("%d",&tem_table.table_number);
			printf("\t\t\t请输入就餐人数：");
			scanf("%d",&tem_table.meal_number);
			tem_table.state=1;//代表这张桌子有人了 ，并且未结账
			printf("\t\t\t -------------------------\n");
			printf("\t\t\t开始点菜\n");
			printf("\t\t\t -------------------------\n");


			for(j=0; j<H; j++)
			{
				printf("\t\t\t输入第%d道菜名：",j+1);
				getchar();
				gets(table_dishes[tem_table.table_number-1][j].dish_name);
				for(i=0; i<H; i++)
				{
					if(strcmp(dishes[i].dish_name,table_dishes[tem_table.table_number-1][j].dish_name)==0)
					{
						flag=1;
						sum=sum+dishes[i].dish_price;
						tem_table.dish_number=j+1;//菜品数量
						tem_table.table_price=sum;
					}
				}
				if(flag==1)
				{
					printf("\t\t\t当前消费：￥%.2lf\n\n",sum);
				}
				if(flag==0)
				{
					printf("\t\t\t抱歉,本店暂时没有这道菜哦~\n\n");
				}

				printf("\t\t\t请问您还需要别的什么吗？\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|      1 继续点菜        |\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|      0 不需要了        |\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t请输入您的选择【0-1】：");
				scanf("%d",&sel);
				while (sel<0 || sel>1)
				{
					printf("\t\t\t输入错误,请重新输入你的选择【0-1】：");
					scanf("%d", &sel);
				}
				if(sel==1)
				{
					continue;
				}
				else if(sel==0)
				{
					printf("\n");
					printf("\t\t\t您一共消费：￥%.2lf\n",sum);
					printf("\t\t\t马上为您上菜，祝您用餐愉快！\n");
					break;
				}
			}

			for(i=0; i<N; i++)
			{
				if(tem_table.table_number==i+1)
				{
					tables[i]=tem_table;
					break;
				}
			}
			filesave();
		}
		else if(sell==2)
		{
			filesave();
			menu();
		}

	}
	printf("\t\t\t");
	system("pause");
}
