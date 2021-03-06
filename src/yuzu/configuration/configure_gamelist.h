// Copyright 2016 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include <QWidget>

namespace Ui {
class ConfigureGameList;
}

class ConfigureGameList : public QWidget {
    Q_OBJECT

public:
    explicit ConfigureGameList(QWidget* parent = nullptr);
    ~ConfigureGameList() override;

    void ApplyConfiguration();

private:
    void RequestGameListUpdate();

    void SetConfiguration();

    void changeEvent(QEvent*) override;
    void RetranslateUI();

    void InitializeIconSizeComboBox();
    void InitializeRowComboBoxes();

    void UpdateFirstRowComboBox(bool init = false);
    void UpdateSecondRowComboBox(bool init = false);

    std::unique_ptr<Ui::ConfigureGameList> ui;
};
