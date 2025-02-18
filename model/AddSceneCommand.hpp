/* cuddly-eureka - Storyboard editor by Team210
 * Copyright (C) 2019  Alexander Kraus <nr4@z10.info>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef ADDSCENECOMMAND_H
#define ADDSCENECOMMAND_H

#include <QUndoCommand>
#include <QPushButton>

#include "DemoModel.hpp"
#include "Scene.hpp"

static int SCENE_COUNTER = 0;

class AddSceneCommand : public QUndoCommand
{
public:
    AddSceneCommand(DemoModel *model);
    virtual ~AddSceneCommand();
    
    void redo() override;
    void undo() override;
    
private:
    DemoModel *m_model;
    Scene *m_scene;
    QPushButton *m_remove_button;
};

#endif
