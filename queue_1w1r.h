/*  
*
*
*
*/

template <typename T, unsigned int capacity>
class queue_1w1r
{
public:
	queue_1w1r()  { }
    ~queue_1w1r() { }
    bool push(const T& t);
    bool push(T&& t);
    bool pop(T& ret);
    
private:
    T data_ring[capacity];
};
