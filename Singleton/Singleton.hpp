#pragma once

#define DELETE_CONS(classname)\
classname(const classname&) = delete;\
classname operator=(const classname&) = delete;\
classname(classname&&) = delete;\
classname operator=(classname&&) = delete;

template <typename T>
class Singleton
{
public:
	Singleton(const Singleton&) = delete;
	Singleton operator=(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton operator=(Singleton&&) = delete;

	using SingletonType = T&;
	static T& getInstance()
	{
		static T* instance = new T;
		return *instance;
	}
};



