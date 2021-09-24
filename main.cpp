#include "Vector3.h"
#include <iostream>

using namespace std;


int main()
{
	Vector3<int> vec1;
	Vector3<int> vec2(1, 2, 3);
	Vector3<int> vec3(vec2);
	Vector3<int> vec4(2, 2, 2);
	Vector3<int> vec5(1, 1, 1);
	Vector3<int> vec6;

	

	cout << "vec1: " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;
	cout << "vec2: " << vec2.GetX() << ", " << vec2.GetY() << ", " << vec2.GetZ() << endl;
	cout << "vec3: " << vec3.GetX() << ", " << vec3.GetY() << ", " << vec3.GetZ() << endl;
	cout << "vec4: " << vec4.GetX() << ", " << vec4.GetY() << ", " << vec4.GetZ() << endl;
	cout << "vec5: " << vec5.GetX() << ", " << vec5.GetY() << ", " << vec5.GetZ() << endl;
	cout << "vec6: " << vec6.GetX() << ", " << vec6.GetY() << ", " << vec6.GetZ() << endl;

	cout << endl;
	vec1 = vec2 + vec3;

	cout << "vec1 = vec2 + vec3: " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;

	vec1 += vec5;
	cout << "vec1 += vec5: " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;

	vec6 = vec1 - vec4;
	cout << "vec6 = vec1 - vec4: " << vec6.GetX() << ", " << vec6.GetY() << ", " << vec6.GetZ() << endl;

	vec1 = vec5;
	cout << "vec1 = vec5: " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;

	bool ret1 = 0;
	if (vec1 == vec5) ret1 = 1;
	cout << "vec1 == vec5?: " << ret1 << endl;

	bool ret2 = 0;
	if (vec1 == vec2) ret2 = 1;
	cout << "vec1 == vec2?: " << ret2 << endl;

	vec1 = vec3;

	cout << endl;

	cout << "vec1: " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;
	cout << "is vec1 zero?: " << vec1.IsZero() << endl;
	vec1.Zero();
	cout << "vec1 to zero " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;
	cout << "is vec1 zero?: " << vec1.IsZero() << endl;
	vec1.Normalize();
	cout << "vec1 normalized " << vec1.GetX() << ", " << vec1.GetY() << ", " << vec1.GetZ() << endl;

	cout << endl;

	Vector3<int> dist;
	
	cout << "dist: " << dist.GetX() << ", " << dist.GetY() << ", " << dist.GetZ() << endl;

	dist = vec1.v3DistanceTo(vec4);
	cout << "distance vec1 to vec3 " << dist.GetX() << ", " << dist.GetY() << ", " << dist.GetZ() << endl;

	float res = vec1.DistanceTo(vec4);
	cout << "esclar disance vec1 to vec3: " << res << endl;
	





	return 0;
}