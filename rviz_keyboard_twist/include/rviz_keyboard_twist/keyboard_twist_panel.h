//
// Created by colin on 7/21/20.
//

#ifndef SRC_KEYBOARD_TWIST_PANEL_H
#define SRC_KEYBOARD_TWIST_PANEL_H

#include "ros/ros.h"
#include "rviz/panel.h"

#include "QSlider"
#include "QKeyEvent"

namespace autolabor_plugin {
    class KeyboardTwistPanel : public rviz::Panel {

    Q_OBJECT
    public:
        KeyboardTwistPanel(QWidget *parent = 0);

        virtual void load( const rviz::Config& config );
        virtual void save( rviz::Config config ) const;

        void keyPressEvent(QKeyEvent *event);

    protected:
        QSlider * max_v_slider_, max_w_slider_;

    };
}


#endif //SRC_KEYBOARD_TWIST_PANEL_H
