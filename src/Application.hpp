namespace cpptesting
{
    class Application
    {
    public:
        void Init();
        void Shutdown();
        void Run();
    private:
        ~Application();
    };

}

inline cpptesting::Application* g_Application = nullptr;
