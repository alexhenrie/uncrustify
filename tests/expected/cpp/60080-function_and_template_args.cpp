class Spaceship
{
public:
Spaceship(int a,
          int b);
void init(int a,
          int b);
};

Spaceship::Spaceship(int a,
                     int b)
{
}

template<typename A,
         typename B>
void* make_spaceship(A a,
                     B b);

template<typename A,
         typename B>
void* make_spaceship(A a,
                     B b)
{
}

int main()
{
	Spaceship(0,
    0);
	make_spaceship(0,
    0);
	return 0;
}
