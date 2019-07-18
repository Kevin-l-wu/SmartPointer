#ifndef _SMART_POINTER_H_
#define _SMART_POINTER_H_

template <typename T>
class SmartPointer
{
	T* mp;
public:
	
	SmartPointer(T* p = NULL)
	{
		mp = p;
	}
	SmartPointer(const SmartPointer<T>& obj)
	{
		mp = obj.mp;
		const_cast<SmartPointer<T>&>(obj).mp = NULL;
	}
	SmartPointer<T>& operator=(const SmartPointer<T>& obj)
	{
		if(this != &obj)
		{
			if(mp != NULL)
				delete mp;//TODO
			mp = obj.mp;
			const_cast<SmartPointer<T>&>(obj).mp = NULL;
		}
		
		return *this;
	}
	T* operator->()
	{
		return mp;
	}
	T& operator*()
	{
		return *mp;
	}
	bool isNull()
	{
		return (mp == NULL);
	}
	T* get()
	{
		return mp;
	}	
	~SmartPointer()
	{
		if(mp != NULL)
			delete mp;
	}
};







#endif