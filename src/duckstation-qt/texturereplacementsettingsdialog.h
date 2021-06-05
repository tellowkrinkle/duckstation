#pragma once
#include "ui_texturereplacementsettingsdialog.h"
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtWidgets/QDialog>
#include <array>

class TextureReplacementSettingsDialog final : public QDialog
{
  Q_OBJECT

public:
  TextureReplacementSettingsDialog(QWidget* parent = nullptr);
  ~TextureReplacementSettingsDialog();

private Q_SLOTS:
  void setDefaults();
  void updateOptionsEnabled();
  void openDumpDirectory();
  void updateVRAMUsage();

private:
  void connectUi();

  Ui::TextureReplacementSettingsDialog m_ui;
};
