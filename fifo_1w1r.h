/*  
*
*
*
*/

template <typename T, unsigned int capacity>
class fifo_1w1r
{
public:
	fifo_1w1r()  { }
    ~fifo_1w1r() { }
    bool push(const T& t);
    bool push(T&& t);
    bool pop(T& ret);
    
private:
    T data_ring[capacity];
};