void customer_pay()
{
	system("cls");
	int i,j,sel,sell,k;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                     �����ϵ�                       |\n");
	printf("\t\t\t|                 ��ӭ���ٻ����ִĲ�����               |\n");
	printf("\t\t\t|������������������������������������������������������|\n");

	while(1)
	{
		printf("\t\t\t�����������ѡ�����Ĳ���:\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   1 ����֧��           |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t|   2 ������һ���˵�     |\n");
		printf("\t\t\t|------------------------|\n");
		printf("\t\t\t����������ѡ��1-2����");
		scanf("%d",&sel);
		while(sel<1 || sel>2)
		{
			printf("\t\t\t���������������������ѡ��1-2��:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			printf("\t\t\t����������Ҫ����֧���Ĳ����ţ�");
			scanf("%d",&k);

			if(tables[k-1].state==1)
			{
				printf("\t\t\t----------------------------------------------------------\n");
				printf("\t\t\t%d������\n",k);
				printf("\t\t\t�ò�������%d��\t���������%d��\n",tables[k-1].meal_number,tables[k-1].dish_number);
				printf("\t\t\t�˵���");
				for(j=0; j<tables[k-1].dish_number; j++)
				{
					printf("%s ",table_dishes[k-1][j].dish_name);
				}
				printf("\n");
				printf("\t\t\tһ����֧����%.2lfԪ\n",tables[k-1].table_price);
				printf("\t\t\t----------------------------------------------------------\n");
				printf("\n");
				printf("\t\t\t|------------------------|\n");
				printf("\t\t\t|   1 ȷ��֧��           |\n");
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
					tables[k-1]=ttt;
					printf("\t\t\t֧���ɹ���\n");
					filesave();
				}
				if(sell==2)
				{
					menu();
				}

			}
			else
			{
				printf("\t\t\t�ò������ڿ���״̬����ȷ���Ƿ�������ȷ\n");
			}
		}

		else if(sel==2)
		{
			filesave();
			menu();
		}
	}
	printf("\t\t\t");
	system("pause");
}
