#include "rviz_keyboard_twist/keyboard_twist_panel.h"
#include "QHBoxLayout"
#include "QVBoxLayout"
#include "QLabel"


namespace autolabor_plugin {

    KeyboardTwistPanel::KeyboardTwistPanel(QWidget *parent) : rviz::Panel(parent) {
        QVBoxLayout *panel_layout = new QVBoxLayout;
        QHBoxLayout *linear_speed_layout = new QHBoxLayout;
        linear_speed_layout->addWidget(new QLabel("max_v : "));
        max_v_slider_ = new QSlider(Qt::Orientation::Horizontal);
        linear_speed_layout->addWidget(max_v_slider_);
        panel_layout->addLayout(linear_speed_layout);
        setLayout(panel_layout);

        grabKeyboard();
        //setFocusPolicy(Qt::StrongFocus);
    }

    void KeyboardTwistPanel::load(const rviz::Config &config) {
        Panel::load(config);
    }

    void KeyboardTwistPanel::save(rviz::Config config) const {
        Panel::save(config);
    }

    void KeyboardTwistPanel::keyPressEvent(QKeyEvent *event) {
        std::cout << event->key() << std::endl;
    }
}

#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(autolabor_plugin::KeyboardTwistPanel, rviz::Panel)