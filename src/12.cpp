
class MyClass {
public:
	int add(int x, int y) {
		return x + y;
	}
};

int main() {
	MyClass myObj;
	std::cout << myObj.add(5, 6) << std::endl;
	return 0;
}