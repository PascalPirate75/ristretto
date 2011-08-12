/*
 *  Copyright (c) Stephan Arts 2009-2010 <stephan@xfce.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __RISTRETTO_PRIVACY_DIALOG_H__
#define __RISTRETTO_PRIVACY_DIALOG_H__

G_BEGIN_DECLS

#define RSTTO_TYPE_PRIVACY_DIALOG rstto_privacy_dialog_get_type()

#define RSTTO_PRIVACY_DIALOG(obj)( \
        G_TYPE_CHECK_INSTANCE_CAST ((obj), \
                RSTTO_TYPE_PRIVACY_DIALOG, \
                RsttoPrivacyDialog))

#define RSTTO_IS_PRIVACY_DIALOG(obj)( \
        G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
                RSTTO_TYPE_PRIVACY_DIALOG))

#define RSTTO_PRIVACY_DIALOG_CLASS(klass)( \
        G_TYPE_CHECK_CLASS_CAST ((klass), \
                RSTTO_TYPE_PRIVACY_DIALOG, \
                RsttoPrivacyDialogClass))

#define RSTTO_IS_PRIVACY_DIALOG_CLASS(klass)( \
        G_TYPE_CHECK_CLASS_TYPE ((klass), \
                RSTTO_TYPE_PRIVACY_DIALOG()))

typedef struct _RsttoPrivacyDialog RsttoPrivacyDialog;

typedef struct _RsttoPrivacyDialogPriv RsttoPrivacyDialogPriv;

struct _RsttoPrivacyDialog
{
    XfceTitledDialog parent;
    RsttoPrivacyDialogPriv *priv;
};

typedef struct _RsttoPrivacyDialogClass RsttoPrivacyDialogClass;

struct _RsttoPrivacyDialogClass
{
    XfceTitledDialogClass  parent_class;
};

GType
rstto_privacy_dialog_get_type();

GtkWidget *
rstto_privacy_dialog_new (GtkWindow *parent);

G_END_DECLS

#endif /* __RISTRETTO_PRIVACY_DIALOG_H__ */
