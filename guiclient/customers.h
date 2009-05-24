/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2009 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

#include "guiclient.h"
#include "xwidget.h"

#include "ui_customers.h"

class customers : public XWidget, public Ui::customers
{
    Q_OBJECT

public:
    customers(QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = Qt::Window);
    ~customers();

public slots:
    virtual void sNew();
    virtual void sEdit();
    virtual void sReassignCustomerType();
    virtual void sView();
    virtual void sDelete();
    virtual void sPopulateMenu( QMenu * pMenu );
    virtual void sFillList( int pCustid, bool pLocal );

protected slots:
    virtual void languageChange();


};

#endif // CUSTOMERS_H
