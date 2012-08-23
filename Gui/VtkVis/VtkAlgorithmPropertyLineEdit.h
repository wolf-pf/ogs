/**
 * Copyright (c) 2012, OpenGeoSys Community (http://www.opengeosys.net)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.net/LICENSE.txt
 *
 * \file VtkAlgorithmPropertyLineEdit.h
 *
 * Created on 2010-10-18 by Lars Bilke
 */

#ifndef VTKALGORITHMPROPERTYLINEEDIT_H
#define VTKALGORITHMPROPERTYLINEEDIT_H

#include <QLineEdit>
#include <QVariant>

class VtkAlgorithmProperties;
class QString;

/// @brief This QLineEdit sets a user property on the given VtkAlgorithmProperties
/// object automatically.
class VtkAlgorithmPropertyLineEdit : public QLineEdit
{
	Q_OBJECT

public:
	/// @brief Constructor.
	/// @param contents The initial text.
	/// @param name The name of the user property to set.
	/// @param type The type of the property.
	/// @param algProps The VtkAlgorithmProperties object.
	/// @param parent The parent widget.
	VtkAlgorithmPropertyLineEdit(const QString& contents,
	                             const QString& name,
	                             QVariant::Type type,
	                             VtkAlgorithmProperties* algProps,
	                             QWidget* parent = 0);
	virtual ~VtkAlgorithmPropertyLineEdit();

private:
	const QString _name;
	VtkAlgorithmProperties* _algProps;
	QVariant::Type _type;

private slots:
	/// @brief This slots is automatically called when the text changed.
	void setNewValue();
};

#endif // VTKALGORITHMPROPERTYLINEEDIT_H
