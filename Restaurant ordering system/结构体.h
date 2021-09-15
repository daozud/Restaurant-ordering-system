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
	int table_number;//餐桌号
	int dish_number;//本餐桌的菜品数量
	int meal_number;//用餐人数
	double table_price;
	int state;//是否结账
};
struct table tables[N];
struct table ttt;
struct admin
{
	char admin_account[20];
	char admin_password[20];
};
struct admin admins[M];
