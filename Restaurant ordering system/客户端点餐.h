void customer_order()
{

	system("cls");
	int i,sell,sel,j=0,flag=0,k=0;
	double sum=0;
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                     �����ϵ�                       |\n");
	printf("\t\t\t|                 ��ӭ���ٻ����ִĲ�����               |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t�������˵����£�\n");
	printf("\t\t\t|----------------------------------------------------|\n");
	printf("\t\t\t| %-10s","���");
	printf("%-18s","��Ʒ����");
	printf("%-12s","�۸�");
	printf("%-10s |","��Ʒ����");
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
	printf("\t\t\t���±�Ų���Ŀǰ���ã��ɹ���������\n");
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
	}//�������п������ʾ������ʽ��  ûɶ�ô������˺ÿ���

	while(1)
	{
		printf("\n");
		printf("\t\t\t��������������Ĳ���:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 ��ʼ���           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 ������һ���˵�     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t����������ѡ��1-2����");
		scanf("%d",&sell);
		while(sell<1 || sell>2)
		{
			printf("\t\t\t���������������������ѡ��1-2��:");
			scanf("%d",&sell);
		}


		if(sell==1)
		{
			/*
			struct table
			{
				int table_number;//������
				int dish_number;//�������Ĳ�Ʒ����
				int meal_number;//�ò�����
				int state;//�Ƿ���� Ĭ�ϵ�0�����ѽ���
			};
			struct table tables[N];
			*/

			struct table tem_table;
			printf("\t\t\t������������Ĳ����ţ�");
			scanf("%d",&tem_table.table_number);
			printf("\t\t\t������Ͳ�������");
			scanf("%d",&tem_table.meal_number);
			tem_table.state=1;//������������������ ������δ����
			printf("\t\t\t -------------------------\n");
			printf("\t\t\t��ʼ���\n");
			printf("\t\t\t -------------------------\n");


			for(j=0; j<H; j++)
			{
				printf("\t\t\t�����%d��������",j+1);
				getchar();
				gets(table_dishes[tem_table.table_number-1][j].dish_name);
				for(i=0; i<H; i++)
				{
					if(strcmp(dishes[i].dish_name,table_dishes[tem_table.table_number-1][j].dish_name)==0)
					{
						flag=1;
						sum=sum+dishes[i].dish_price;
						tem_table.dish_number=j+1;//��Ʒ����
						tem_table.table_price=sum;
					}
				}
				if(flag==1)
				{
					printf("\t\t\t��ǰ���ѣ���%.2lf\n\n",sum);
				}
				if(flag==0)
				{
					printf("\t\t\t��Ǹ,������ʱû�������Ŷ~\n\n");
				}

				printf("\t\t\t����������Ҫ���ʲô��\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|      1 �������        |\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|      0 ����Ҫ��        |\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t����������ѡ��0-1����");
				scanf("%d",&sel);
				while (sel<0 || sel>1)
				{
					printf("\t\t\t�������,�������������ѡ��0-1����");
					scanf("%d", &sel);
				}
				if(sel==1)
				{
					continue;
				}
				else if(sel==0)
				{
					printf("\n");
					printf("\t\t\t��һ�����ѣ���%.2lf\n",sum);
					printf("\t\t\t����Ϊ���ϲˣ�ף���ò���죡\n");
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
