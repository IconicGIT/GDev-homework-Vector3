#ifndef __VECTOR3__
#define __VECTOR3__

#include <math.h>

template <class TYPE>
class Vector3
{
public:
	Vector3()
	{
		x = y = z = 0;
	}

	Vector3(Vector3<TYPE> &newVector) 
	{
		x = newVector.x;
		y = newVector.y;
		z = newVector.z;
	}

	Vector3(TYPE x, TYPE y, TYPE z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}


	~Vector3(){}

	TYPE GetX() const
	{
		return x;
	}

	TYPE GetY() const
	{
		return y;
	}

	TYPE GetZ() const
	{
		return z;
	}

	Vector3 operator+(const Vector3& v1)
	{
		Vector3 vec;
		vec.x = this->x + v1.x;
		vec.y = this->y + v1.y;
		vec.z = this->z + v1.z;

		return vec;
	}

	Vector3 operator-(const Vector3& v1)
	{
		Vector3 vec;
		vec.x = this->x - v1.x;
		vec.y = this->y - v1.y;
		vec.z = this->z - v1.z;

		return vec;
	}

	void operator+=(const Vector3& v1)
	{
		this->x += v1.x;
		this->y += v1.y;
		this->z += v1.z;
	}

	void operator-=(const Vector3& v1)
	{
		this->x += v1.x;
		this->y += v1.y;
		this->z += v1.z;
	}

	void operator=(const Vector3& v1)
	{
		this->x = v1.x;
		this->y = v1.y;
		this->z = v1.z;
	}

	bool operator==(const Vector3& v1) const
	{
		bool ret1 = (this->x == v1.x) ? true : false;
		bool ret2 = (this->y == v1.y) ? true : false;
		bool ret3 = (this->z == v1.z) ? true : false;
		bool ret = false;
		
		if (ret1 == ret2 && ret2 == ret3) ret = true;
		

		return ret;

	}

	void Normalize()
	{
		x = y = z = 1;
	}

	void Zero()
	{
		x = y = z = 0;
	}

	bool IsZero() const
	{
		return (x == y && z == x && x == 0) ? true : false;
	}

	Vector3 v3DistanceTo(const Vector3& otherVec)
	{
		Vector3 vectorDist;

		vectorDist.x = otherVec.x - this->x;
		vectorDist.y = otherVec.y - this->y;
		vectorDist.z = otherVec.z - this->z;

		return vectorDist;

	}

	TYPE DistanceTo(const Vector3& otherVec)
	{
		Vector3 vectorDist;

		vectorDist.x = otherVec.x - this->x;
		vectorDist.y = otherVec.y - this->y;
		vectorDist.z = otherVec.z - this->z;
		
		TYPE ret = sqrtf(pow((float)vectorDist.x, 2) + pow((float)vectorDist.y, 2) + pow((float)vectorDist.z, 2));

		return ret;

	}

private:

	TYPE x, y, z;

};







#endif // !__VECTOR3__
