void query_dish()
{
	system("cls");
	int i,sel;
	struct dish tem_dish;
	printf("\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                ��ӭ������ѯ��Ʒ����                  |\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\n");

	while(1)
	{
		printf("\t\t\t�����������ѡ�����Ĳ���:\n");
		printf("\t\t\t|������������������������������������������������������|\n");
		printf("\t\t\t|                 1   ��������ѯ                       |\n");
		printf("\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t|                 2   ����Ʒ���Ͳ�ѯ                   |\n");
		printf("\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t|                 3   ����Ʒ�۸��ѯ                   |\n");
		printf("\t\t\t|------------------------------------------------------|\n");
		printf("\t\t\t|                 4   ������һ���˵�                   |\n");
		printf("\t\t\t|������������������������������������������������������|\n");
		printf("\t\t\t����������ѡ��1-4����");
		scanf("%d",&sel);

		while(sel<1 || sel>4)
		{
			printf("\t\t\t���������������������ѡ��1-4��:");
			scanf("%d",&sel);
		}

		if(sel==1)
		{
			int flag1 = 0;
			printf("\t\t\t���������ѯ�Ĳ�Ʒ����:");
			getchar();
			gets(tem_dish.dish_name);
			printf("\t\t\t��ѯ�������:\n\n");
			for(i=0; i<H; i++)
			{
				if (strcmp(tem_dish.dish_name, dishes[i].dish_name) == 0)
				{
					flag1=1;

					printf("\t\t\t%-10s","���");
					printf("%-18s","��Ʒ����");
					printf("%-12s","�۸�");
					printf("%-10s","��Ʒ����");
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
				printf("\t\t\t��ǰ�˵�û�д��ֲ�Ʒ��\n");
			}
			printf("\n");
		}
		else if(sel==2)
		{
			int flag2 = 0;
			printf("\t\t\t���������ѯ�Ĳ�Ʒ����:");
			getchar();
			gets(tem_dish.dish_type);
			printf("\t\t\t��ѯ�������:\n");
			printf("\t\t\t%-10s","���");
			printf("%-18s","��Ʒ����");
			printf("%-12s","�۸�");
			printf("%-10s","��Ʒ����");
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
				printf("\t\t\t��ǰ�˵�û�д����Ʒ��\n");
			}
			printf("\n");
		}
		else if(sel==3)
		{
			int flag3 = 0,sell;
			printf("\t\t\t�����Խ�������ѡ��:\n");
			printf("\t\t\t|������������������������|\n");
			printf("\t\t\t|      1 ��40����        |\n");
			printf("\t\t\t|      2 ��41-80         |\n");
			printf("\t\t\t|      3 ��81-120        |\n");
			printf("\t\t\t|      4 ��120����       |\n");
			printf("\t\t\t|������������������������|\n");
			printf("\t\t\t����������ѡ��1-4����");
			scanf("%d",&sell);
			while(sell<1 || sell>4)
			{
				printf("\t\t\t���������������������ѡ��1-4��:");
				scanf("%d",&sell);
			}
			printf("\t\t\t��ѯ�������:\n");
			printf("\t\t\t%-10s","���");
			printf("%-18s","��Ʒ����");
			printf("%-12s","�۸�");
			printf("%-10s","��Ʒ����");
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
