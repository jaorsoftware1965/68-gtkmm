#include <gtkmm.h>

class MyWindow : public Gtk::Window
{
public:
  MyWindow();
};

MyWindow::MyWindow()
{
  set_title("Hola Mundo");
  set_default_size(200, 200);
}

int main(int argc, char* argv[])
{
  // auto app = Gtk::Application::create("org.gtkmm.examples.base");
  // return app->run(window);
  // //return app->make_window_and_run<MyWindow>(argc, argv);

  Glib::RefPtr<Gtk::Application> app =
    Gtk::Application::create(argc, argv,
      "org.gtkmm.examples.base");

  Gtk::Window window;
  window.set_default_size(200, 200);

  return app->run(window);
}