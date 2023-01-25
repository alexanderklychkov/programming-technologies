#include <iostream>

struct ISubscriber
{
    virtual void on_event() = 0;
};

struct Subscriber1 : ISubscriber
{
    void on_event() override
    {
        std::cout << "Subscriber1" << std::endl;
    }
};

struct Subscriber2 : ISubscriber
{
    void on_event() override
    {
        std::cout << "Subscriber2" << std::endl;
    }
};

struct EventListener
{
public:
    void add_subscriber(ISubscriber* subscriber)
    {
        m_subscribers[m_size++];
    }

    void notify()
    {
        for (size_t i = 0u; i < m_size; ++i)
        {
            m_subscribers[i]->on_event();
        }
    }
private:
    size_t m_size = 0u;
    ISubscriber* m_subscribers[10];
};


int main()
{
    Subscriber1 subscriber1;
    Subscriber2 subscriber2;
    EventListener listener;

    listener.add_subscriber(&subscriber1);
    listener.add_subscriber(&subscriber2);

    listener.notify();

    return 0;
}