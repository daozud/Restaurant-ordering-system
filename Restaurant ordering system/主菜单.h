int menu()
{
	int sel;
	system("cls");


	printf("\t\t\t*****************��ӭ���������ִĵ��ϵͳ***************\n");
	printf("\t\t\t��ѡ�����Ĳ���:\n");
	printf("\t\t\t|������������������������������������������������������|\n");
	printf("\t\t\t|                  1   ����˵�¼                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  2   �����ע��                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  3   �ͻ��˵��                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  4   �ͻ���֧��                      |\n");
	printf("\t\t\t|------------------------------------------------------|\n");
	printf("\t\t\t|                  0   �˳�                            |\n");
	printf("\t\t\t|������������������������������������������������������|\n");

	printf("\t\t\t����������ѡ��0-4����");
	scanf("%d", &sel);
	getchar();
	while (sel<0 || sel>4)
	{
		printf("\t\t\t�������,��������������ѡ��0-4����");
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
