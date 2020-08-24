#pragma once

#include <ostream>

template<typename T>
class Shared_ptr {

	struct Ref_Count {
	public:
		Ref_Count() = default;
		~Ref_Count() = default;

		Ref_Count(const Ref_Count&) = delete;
		const Ref_Count& operator=(const Ref_Count&) = delete;

		void operator++() { ++m_Count; }
		void operator--() { if (m_Count) --m_Count; }
		inline unsigned int getCount() { return m_Count; }

		std::ostream& operator<<(std::ostream& os)
		{
			return os << "Current reference count is: " << m_Count << std::endl;
		}

	private:
		unsigned int m_Count = { 0u };
	};

public:
	Shared_ptr() = default;

	explicit Shared_ptr(T* obj = nullptr)
		: m_Ptr{ obj }
		, m_RefCount{ new Ref_Count{} }
	{
		if (m_Ptr != nullptr)
		{
			++m_RefCount;
		}
	}

	Shared_ptr(const Shared_ptr<T>& rhs)
		: m_Ptr {rhs.m_Ptr}
		, m_RefCount {rhs.m_RefCount}
	{
		++m_RefCount;
	}

	~Shared_ptr()
	{
		--m_RefCount;

		if (!m_RefCount->getCount())
		{
			delete m_Ptr;
			delete m_RefCount;
		}
	}

	bool operator==(const Shared_ptr& rhs) const
	{
		return (m_Ptr == rhs.m_Ptr) && (m_RefCount == rhs.m_RefCount);
	}

	bool operator!=(const Shared_ptr& rhs) const
	{
		return !(*this == rhs);
	}

	const Shared_ptr& operator=(const Shared_ptr& rhs)
	{
		m_Ptr	   = rhs.m_Ptr;
		m_RefCount = rhs.m_RefCount;
		
		return *this;
	}

	const T& operator->() const 
	{
		return *m_Ptr;
	}

	T& operator->()
	{
		return *m_Ptr;
	}

	const T& operator*() const
	{
		return *m_Ptr;
	}

	T& operator*()
	{
		return *m_Ptr;
	}
	
	const unsigned int getCount() const
	{
		return m_RefCount->getCount();
	}
private:

	T*		   m_Ptr;	   ///< Heap object.
	Ref_Count* m_RefCount; ///< Reference count.
};