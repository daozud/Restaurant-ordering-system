#define H 200
#define M 200
#define N 100

struct dish
{
	char dish_name[20];
	double dish_price;
	char dish_type[20];
};
struct dish dishes[H];
struct dish table_dishes[N][H];



struct table
{
	int table_number;//������
	int dish_number;//�������Ĳ�Ʒ����
	int meal_number;//�ò�����
	double table_price;
	int state;//�Ƿ����
};
struct table tables[N];
struct table ttt;
struct admin
{
	char admin_account[20];
	char admin_password[20];
};
struct admin admins[M];
