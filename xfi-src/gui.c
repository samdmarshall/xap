/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "gui.h"
#include "support.h"

GtkWidget*
create_xfi (void)
{
  GtkWidget *xfi;
  GtkWidget *mainbox;
  GtkWidget *menubar;
  guint tmp_key;
  GtkWidget *mfile;
  GtkWidget *mfile_menu;
  GtkAccelGroup *mfile_menu_accels;
  GtkWidget *msave;
  GtkWidget *separator1;
  GtkWidget *mquit;
  GtkWidget *medit;
  GtkWidget *medit_menu;
  GtkAccelGroup *medit_menu_accels;
  GtkWidget *m_select_all;
  GtkWidget *m_unselect_all;
  GtkWidget *mhelp;
  GtkWidget *mhelp_menu;
  GtkAccelGroup *mhelp_menu_accels;
  GtkWidget *mabout;
  GtkWidget *hseparator;
  GtkWidget *vpaned;
  GtkWidget *notebook;
  GtkWidget *tbl_find;
  guint lpattern_key;
  GtkWidget *lpattern;
  GtkWidget *comb_pattern;
  GList *comb_pattern_items = NULL;
  GtkWidget *coe_pattern;
  GtkWidget *btn_find;
  GtkWidget *lroot;
  GtkWidget *comb_root;
  GList *comb_root_items = NULL;
  GtkWidget *coe_root;
  guint btn_browse_key;
  GtkWidget *btn_browse;
  GtkWidget *ltype;
  GtkWidget *tbox;
  GSList *type_group = NULL;
  guint radio_file_key;
  GtkWidget *radio_file;
  guint radio_dir_key;
  GtkWidget *radio_dir;
  guint radio_all_key;
  GtkWidget *radio_all;
  GtkWidget *nlabel_find;
  GtkWidget *tbl_options;
  guint cb_this_fs_key;
  GtkWidget *cb_this_fs;
  guint cb_symlinks_key;
  GtkWidget *cb_symlinks;
  guint cb_no_user_key;
  GtkWidget *cb_no_user;
  guint cb_no_group_key;
  GtkWidget *cb_no_group;
  GtkWidget *nlabel_options;
  GtkWidget *scrolledwindow;
  GtkWidget *viewport;
  GtkWidget *lst_result;
  GtkWidget *hbox;
  GtkWidget *statusbar;
  GtkWidget *progressbar;
  GtkAccelGroup *accel_group;
  GtkTooltips *tooltips;

  tooltips = gtk_tooltips_new ();

  accel_group = gtk_accel_group_new ();

  xfi = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_object_set_data (GTK_OBJECT (xfi), "xfi", xfi);
  gtk_window_set_title (GTK_WINDOW (xfi), "X Find Interface");

  mainbox = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (mainbox);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mainbox", mainbox,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (mainbox);
  gtk_container_add (GTK_CONTAINER (xfi), mainbox);

  menubar = gtk_menu_bar_new ();
  gtk_widget_ref (menubar);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "menubar", menubar,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (menubar);
  gtk_box_pack_start (GTK_BOX (mainbox), menubar, FALSE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (menubar), 1);
  GTK_WIDGET_SET_FLAGS (menubar, GTK_CAN_FOCUS);

  mfile = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (mfile)->child),
                                   "_File");
  gtk_widget_add_accelerator (mfile, "activate_item", accel_group,
                              tmp_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (mfile);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mfile", mfile,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (mfile);
  gtk_container_add (GTK_CONTAINER (menubar), mfile);

  mfile_menu = gtk_menu_new ();
  gtk_widget_ref (mfile_menu);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mfile_menu", mfile_menu,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (mfile), mfile_menu);
  mfile_menu_accels = gtk_menu_ensure_uline_accel_group (GTK_MENU (mfile_menu));

  msave = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (msave)->child),
                                   "_Save as ..");
  gtk_widget_add_accelerator (msave, "activate_item", mfile_menu_accels,
                              tmp_key, 0, 0);
  gtk_widget_ref (msave);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "msave", msave,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (msave);
  gtk_container_add (GTK_CONTAINER (mfile_menu), msave);
  gtk_tooltips_set_tip (tooltips, msave, "Save result as plain text", NULL);
  gtk_widget_add_accelerator (msave, "activate", accel_group,
                              GDK_s, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);

  separator1 = gtk_menu_item_new ();
  gtk_widget_ref (separator1);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "separator1", separator1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (separator1);
  gtk_container_add (GTK_CONTAINER (mfile_menu), separator1);
  gtk_widget_set_sensitive (separator1, FALSE);

  mquit = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (mquit)->child),
                                   "_Quit");
  gtk_widget_add_accelerator (mquit, "activate_item", mfile_menu_accels,
                              tmp_key, 0, 0);
  gtk_widget_ref (mquit);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mquit", mquit,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (mquit);
  gtk_container_add (GTK_CONTAINER (mfile_menu), mquit);
  gtk_tooltips_set_tip (tooltips, mquit, "Quit the Application", NULL);
  gtk_widget_add_accelerator (mquit, "activate", accel_group,
                              GDK_q, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);

  medit = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (medit)->child),
                                   "_Edit");
  gtk_widget_add_accelerator (medit, "activate_item", accel_group,
                              tmp_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (medit);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "medit", medit,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (medit);
  gtk_container_add (GTK_CONTAINER (menubar), medit);

  medit_menu = gtk_menu_new ();
  gtk_widget_ref (medit_menu);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "medit_menu", medit_menu,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (medit), medit_menu);
  medit_menu_accels = gtk_menu_ensure_uline_accel_group (GTK_MENU (medit_menu));

  m_select_all = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (m_select_all)->child),
                                   "Select _all");
  gtk_widget_add_accelerator (m_select_all, "activate_item", medit_menu_accels,
                              tmp_key, 0, 0);
  gtk_widget_ref (m_select_all);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "m_select_all", m_select_all,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (m_select_all);
  gtk_container_add (GTK_CONTAINER (medit_menu), m_select_all);
  gtk_widget_add_accelerator (m_select_all, "activate", accel_group,
                              GDK_a, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);

  m_unselect_all = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (m_unselect_all)->child),
                                   "_Unselect all");
  gtk_widget_add_accelerator (m_unselect_all, "activate_item", medit_menu_accels,
                              tmp_key, 0, 0);
  gtk_widget_ref (m_unselect_all);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "m_unselect_all", m_unselect_all,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (m_unselect_all);
  gtk_container_add (GTK_CONTAINER (medit_menu), m_unselect_all);
  gtk_widget_add_accelerator (m_unselect_all, "activate", accel_group,
                              GDK_u, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);

  mhelp = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (mhelp)->child),
                                   "_Help");
  gtk_widget_add_accelerator (mhelp, "activate_item", accel_group,
                              tmp_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (mhelp);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mhelp", mhelp,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (mhelp);
  gtk_container_add (GTK_CONTAINER (menubar), mhelp);
  gtk_menu_item_right_justify (GTK_MENU_ITEM (mhelp));

  mhelp_menu = gtk_menu_new ();
  gtk_widget_ref (mhelp_menu);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mhelp_menu", mhelp_menu,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (mhelp), mhelp_menu);
  mhelp_menu_accels = gtk_menu_ensure_uline_accel_group (GTK_MENU (mhelp_menu));

  mabout = gtk_menu_item_new_with_label ("");
  tmp_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (mabout)->child),
                                   "_About");
  gtk_widget_add_accelerator (mabout, "activate_item", mhelp_menu_accels,
                              tmp_key, 0, 0);
  gtk_widget_ref (mabout);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "mabout", mabout,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (mabout);
  gtk_container_add (GTK_CONTAINER (mhelp_menu), mabout);
  gtk_widget_add_accelerator (mabout, "activate", accel_group,
                              GDK_a, GDK_CONTROL_MASK,
                              GTK_ACCEL_VISIBLE);

  hseparator = gtk_hseparator_new ();
  gtk_widget_ref (hseparator);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "hseparator", hseparator,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hseparator);
  gtk_box_pack_start (GTK_BOX (mainbox), hseparator, FALSE, FALSE, 0);

  vpaned = gtk_vpaned_new ();
  gtk_widget_ref (vpaned);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "vpaned", vpaned,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vpaned);
  gtk_box_pack_start (GTK_BOX (mainbox), vpaned, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (vpaned), 2);

  notebook = gtk_notebook_new ();
  gtk_widget_ref (notebook);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "notebook", notebook,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (notebook);
  gtk_paned_pack1 (GTK_PANED (vpaned), notebook, FALSE, TRUE);

  tbl_find = gtk_table_new (3, 3, FALSE);
  gtk_widget_ref (tbl_find);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "tbl_find", tbl_find,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (tbl_find);
  gtk_container_add (GTK_CONTAINER (notebook), tbl_find);
  gtk_container_set_border_width (GTK_CONTAINER (tbl_find), 4);
  gtk_table_set_row_spacings (GTK_TABLE (tbl_find), 1);
  gtk_table_set_col_spacings (GTK_TABLE (tbl_find), 3);

  lpattern = gtk_label_new ("");
  lpattern_key = gtk_label_parse_uline (GTK_LABEL (lpattern),
                                   "Pat_tern:");
  gtk_widget_ref (lpattern);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "lpattern", lpattern,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (lpattern);
  gtk_table_attach (GTK_TABLE (tbl_find), lpattern, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (lpattern), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (lpattern), 1, 0.5);

  comb_pattern = gtk_combo_new ();
  gtk_widget_ref (comb_pattern);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "comb_pattern", comb_pattern,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (comb_pattern);
  gtk_table_attach (GTK_TABLE (tbl_find), comb_pattern, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_combo_set_use_arrows_always (GTK_COMBO (comb_pattern), TRUE);
  comb_pattern_items = g_list_append (comb_pattern_items, "*");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.c");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.jpg");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.tif");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.png");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.doc");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.html");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.xls");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.txt");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.pdf");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.mov");
  comb_pattern_items = g_list_append (comb_pattern_items, "*.mpg");
  comb_pattern_items = g_list_append (comb_pattern_items, ".[^.]*");
  gtk_combo_set_popdown_strings (GTK_COMBO (comb_pattern), comb_pattern_items);
  g_list_free (comb_pattern_items);

  coe_pattern = GTK_COMBO (comb_pattern)->entry;
  gtk_widget_ref (coe_pattern);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "coe_pattern", coe_pattern,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (coe_pattern);
  GTK_WIDGET_SET_FLAGS (coe_pattern, GTK_CAN_DEFAULT);
  gtk_entry_set_text (GTK_ENTRY (coe_pattern), "*");

  btn_find = gtk_button_new_with_label ("Find");
  gtk_widget_ref (btn_find);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "btn_find", btn_find,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (btn_find);
  gtk_table_attach (GTK_TABLE (tbl_find), btn_find, 2, 3, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (btn_find), 2);
  gtk_tooltips_set_tip (tooltips, btn_find, "Left mouse button to start, ESCAPE to stop", NULL);

  lroot = gtk_label_new ("Start directory:");
  gtk_widget_ref (lroot);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "lroot", lroot,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (lroot);
  gtk_table_attach (GTK_TABLE (tbl_find), lroot, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (lroot), 1, 0.5);

  comb_root = gtk_combo_new ();
  gtk_widget_ref (comb_root);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "comb_root", comb_root,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (comb_root);
  gtk_table_attach (GTK_TABLE (tbl_find), comb_root, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  comb_root_items = g_list_append (comb_root_items, "/");
  comb_root_items = g_list_append (comb_root_items, "/usr/");
  comb_root_items = g_list_append (comb_root_items, "/opt/");
  comb_root_items = g_list_append (comb_root_items, "/var/");
  comb_root_items = g_list_append (comb_root_items, "/usr/X11R6/");
  comb_root_items = g_list_append (comb_root_items, "/usr/local/");
  gtk_combo_set_popdown_strings (GTK_COMBO (comb_root), comb_root_items);
  g_list_free (comb_root_items);

  coe_root = GTK_COMBO (comb_root)->entry;
  gtk_widget_ref (coe_root);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "coe_root", coe_root,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (coe_root);
  gtk_entry_set_text (GTK_ENTRY (coe_root), "/");

  btn_browse = gtk_button_new_with_label ("");
  btn_browse_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (btn_browse)->child),
                                   "_...");
  gtk_widget_add_accelerator (btn_browse, "clicked", accel_group,
                              btn_browse_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (btn_browse);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "btn_browse", btn_browse,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (btn_browse);
  gtk_table_attach (GTK_TABLE (tbl_find), btn_browse, 2, 3, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_container_set_border_width (GTK_CONTAINER (btn_browse), 2);
  gtk_tooltips_set_tip (tooltips, btn_browse, "Browse with dialog..", NULL);

  ltype = gtk_label_new ("Type:");
  gtk_widget_ref (ltype);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "ltype", ltype,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (ltype);
  gtk_table_attach (GTK_TABLE (tbl_find), ltype, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (ltype), GTK_JUSTIFY_RIGHT);
  gtk_misc_set_alignment (GTK_MISC (ltype), 1, 0.5);

  tbox = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (tbox);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "tbox", tbox,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (tbox);
  gtk_table_attach (GTK_TABLE (tbl_find), tbox, 1, 3, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  radio_file = gtk_radio_button_new_with_label (type_group, "");
  radio_file_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (radio_file)->child),
                                   "_Plain File");
  gtk_widget_add_accelerator (radio_file, "clicked", accel_group,
                              radio_file_key, GDK_MOD1_MASK, 0);
  type_group = gtk_radio_button_group (GTK_RADIO_BUTTON (radio_file));
  gtk_widget_ref (radio_file);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "radio_file", radio_file,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (radio_file);
  gtk_box_pack_start (GTK_BOX (tbox), radio_file, FALSE, FALSE, 0);
  gtk_toggle_button_set_active (GTK_TOGGLE_BUTTON (radio_file), TRUE);

  radio_dir = gtk_radio_button_new_with_label (type_group, "");
  radio_dir_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (radio_dir)->child),
                                   "_Directory");
  gtk_widget_add_accelerator (radio_dir, "clicked", accel_group,
                              radio_dir_key, GDK_MOD1_MASK, 0);
  type_group = gtk_radio_button_group (GTK_RADIO_BUTTON (radio_dir));
  gtk_widget_ref (radio_dir);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "radio_dir", radio_dir,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (radio_dir);
  gtk_box_pack_start (GTK_BOX (tbox), radio_dir, FALSE, FALSE, 0);

  radio_all = gtk_radio_button_new_with_label (type_group, "");
  radio_all_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (radio_all)->child),
                                   "A_ll");
  gtk_widget_add_accelerator (radio_all, "clicked", accel_group,
                              radio_all_key, GDK_MOD1_MASK, 0);
  type_group = gtk_radio_button_group (GTK_RADIO_BUTTON (radio_all));
  gtk_widget_ref (radio_all);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "radio_all", radio_all,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (radio_all);
  gtk_box_pack_start (GTK_BOX (tbox), radio_all, FALSE, FALSE, 0);

  nlabel_find = gtk_label_new ("Find");
  gtk_widget_ref (nlabel_find);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "nlabel_find", nlabel_find,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (nlabel_find);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 0), nlabel_find);

  tbl_options = gtk_table_new (2, 2, FALSE);
  gtk_widget_ref (tbl_options);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "tbl_options", tbl_options,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (tbl_options);
  gtk_container_add (GTK_CONTAINER (notebook), tbl_options);
  gtk_container_set_border_width (GTK_CONTAINER (tbl_options), 4);
  gtk_table_set_col_spacings (GTK_TABLE (tbl_options), 8);

  cb_this_fs = gtk_check_button_new_with_label ("");
  cb_this_fs_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (cb_this_fs)->child),
                                   "Don't chec_k other filesystems");
  gtk_widget_add_accelerator (cb_this_fs, "clicked", accel_group,
                              cb_this_fs_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (cb_this_fs);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "cb_this_fs", cb_this_fs,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (cb_this_fs);
  gtk_table_attach (GTK_TABLE (tbl_options), cb_this_fs, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  cb_symlinks = gtk_check_button_new_with_label ("");
  cb_symlinks_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (cb_symlinks)->child),
                                   "Follow s_ymbolic links");
  gtk_widget_add_accelerator (cb_symlinks, "clicked", accel_group,
                              cb_symlinks_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (cb_symlinks);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "cb_symlinks", cb_symlinks,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (cb_symlinks);
  gtk_table_attach (GTK_TABLE (tbl_options), cb_symlinks, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  cb_no_user = gtk_check_button_new_with_label ("");
  cb_no_user_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (cb_no_user)->child),
                                   "_No user defined");
  gtk_widget_add_accelerator (cb_no_user, "clicked", accel_group,
                              cb_no_user_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (cb_no_user);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "cb_no_user", cb_no_user,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (cb_no_user);
  gtk_table_attach (GTK_TABLE (tbl_options), cb_no_user, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  cb_no_group = gtk_check_button_new_with_label ("");
  cb_no_group_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (cb_no_group)->child),
                                   "No _group defined");
  gtk_widget_add_accelerator (cb_no_group, "clicked", accel_group,
                              cb_no_group_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (cb_no_group);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "cb_no_group", cb_no_group,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (cb_no_group);
  gtk_table_attach (GTK_TABLE (tbl_options), cb_no_group, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  nlabel_options = gtk_label_new ("Options");
  gtk_widget_ref (nlabel_options);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "nlabel_options", nlabel_options,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (nlabel_options);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 1), nlabel_options);

  scrolledwindow = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "scrolledwindow", scrolledwindow,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow);
  gtk_paned_pack2 (GTK_PANED (vpaned), scrolledwindow, TRUE, TRUE);
  gtk_widget_set_usize (scrolledwindow, 380, 180);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow), GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);

  viewport = gtk_viewport_new (NULL, NULL);
  gtk_widget_ref (viewport);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "viewport", viewport,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (viewport);
  gtk_container_add (GTK_CONTAINER (scrolledwindow), viewport);

  lst_result = gtk_list_new ();
  gtk_widget_ref (lst_result);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "lst_result", lst_result,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (lst_result);
  gtk_container_add (GTK_CONTAINER (viewport), lst_result);
  gtk_container_set_border_width (GTK_CONTAINER (lst_result), 1);
  GTK_WIDGET_SET_FLAGS (lst_result, GTK_CAN_FOCUS);
  gtk_tooltips_set_tip (tooltips, lst_result, "Search result", NULL);
  gtk_widget_set_events (lst_result, GDK_KEY_PRESS_MASK);
  gtk_list_set_selection_mode (GTK_LIST (lst_result), GTK_SELECTION_EXTENDED);

  hbox = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "hbox", hbox,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox);
  gtk_box_pack_start (GTK_BOX (mainbox), hbox, FALSE, TRUE, 0);

  statusbar = gtk_statusbar_new ();
  gtk_widget_ref (statusbar);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "statusbar", statusbar,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (statusbar);
  gtk_box_pack_start (GTK_BOX (hbox), statusbar, TRUE, TRUE, 0);

  progressbar = gtk_progress_bar_new ();
  gtk_widget_ref (progressbar);
  gtk_object_set_data_full (GTK_OBJECT (xfi), "progressbar", progressbar,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (progressbar);
  gtk_box_pack_start (GTK_BOX (hbox), progressbar, FALSE, FALSE, 0);
  gtk_progress_set_activity_mode (GTK_PROGRESS (progressbar), TRUE);
  gtk_progress_set_show_text (GTK_PROGRESS (progressbar), TRUE);

  gtk_signal_connect (GTK_OBJECT (xfi), "delete_event",
                      GTK_SIGNAL_FUNC (gtk_main_quit),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (msave), "activate",
                      GTK_SIGNAL_FUNC (on_msave_activate),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (mquit), "activate",
                      GTK_SIGNAL_FUNC (on_mquit_activate),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (m_select_all), "activate",
                      GTK_SIGNAL_FUNC (on_m_select_all),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (m_unselect_all), "activate",
                      GTK_SIGNAL_FUNC (on_m_unselect_all),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (mabout), "activate",
                      GTK_SIGNAL_FUNC (on_mabout_activate),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (coe_pattern), "realize",
                      GTK_SIGNAL_FUNC (on_coe_pattern_realize),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (coe_pattern), "drag_data_received",
                      GTK_SIGNAL_FUNC (on_coe_drag_data_received),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (btn_find), "clicked",
                      GTK_SIGNAL_FUNC (on_btn_find_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (btn_find), "key_press_event",
                      GTK_SIGNAL_FUNC (on_btn_find_key_press),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (coe_root), "realize",
                      GTK_SIGNAL_FUNC (on_coe_root_realize),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (coe_root), "drag_data_received",
                      GTK_SIGNAL_FUNC (on_coe_drag_data_received),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (btn_browse), "clicked",
                      GTK_SIGNAL_FUNC (on_btn_browse_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (lst_result), "key_press_event",
                      GTK_SIGNAL_FUNC (on_lst_result_key_press_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (lst_result), "button_press_event",
                      GTK_SIGNAL_FUNC (on_lst_result_button_press_event),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (lst_result), "drag_data_get",
                      GTK_SIGNAL_FUNC (on_lst_result_drag_data_get),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (lst_result), "drag_data_delete",
                      GTK_SIGNAL_FUNC (on_lst_result_drag_data_delete),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (lst_result), "realize",
                      GTK_SIGNAL_FUNC (on_lst_result_realize),
                      NULL);

  gtk_widget_add_accelerator (coe_pattern, "grab_focus", accel_group,
                              lpattern_key, GDK_MOD1_MASK, 0);

  gtk_widget_grab_focus (coe_pattern);
  gtk_widget_grab_default (coe_pattern);
  gtk_object_set_data (GTK_OBJECT (xfi), "tooltips", tooltips);

  gtk_window_add_accel_group (GTK_WINDOW (xfi), accel_group);

  return xfi;
}

GtkWidget*
create_wabout (void)
{
  GtkWidget *wabout;
  GtkWidget *vbox;
  GtkWidget *label1;
  GtkWidget *label2;
  guint btn_about_key;
  GtkWidget *btn_about;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  wabout = gtk_window_new (GTK_WINDOW_DIALOG);
  gtk_object_set_data (GTK_OBJECT (wabout), "wabout", wabout);
  gtk_window_set_title (GTK_WINDOW (wabout), "About XFI");
  gtk_window_set_position (GTK_WINDOW (wabout), GTK_WIN_POS_MOUSE);

  vbox = gtk_vbox_new (FALSE, 3);
  gtk_widget_ref (vbox);
  gtk_object_set_data_full (GTK_OBJECT (wabout), "vbox", vbox,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox);
  gtk_container_add (GTK_CONTAINER (wabout), vbox);
  gtk_container_set_border_width (GTK_CONTAINER (vbox), 5);

  label1 = gtk_label_new ("X window Find Interface");
  gtk_widget_ref (label1);
  gtk_object_set_data_full (GTK_OBJECT (wabout), "label1", label1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (vbox), label1, FALSE, FALSE, 0);

  label2 = gtk_label_new ("(c) rasca");
  gtk_widget_ref (label2);
  gtk_object_set_data_full (GTK_OBJECT (wabout), "label2", label2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (vbox), label2, FALSE, FALSE, 0);

  btn_about = gtk_button_new_with_label ("");
  btn_about_key = gtk_label_parse_uline (GTK_LABEL (GTK_BIN (btn_about)->child),
                                   "_Close");
  gtk_widget_add_accelerator (btn_about, "clicked", accel_group,
                              btn_about_key, GDK_MOD1_MASK, 0);
  gtk_widget_ref (btn_about);
  gtk_object_set_data_full (GTK_OBJECT (wabout), "btn_about", btn_about,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (btn_about);
  gtk_box_pack_start (GTK_BOX (vbox), btn_about, FALSE, FALSE, 0);
  GTK_WIDGET_SET_FLAGS (btn_about, GTK_CAN_DEFAULT);
  gtk_widget_add_accelerator (btn_about, "clicked", accel_group,
                              GDK_W, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);
  gtk_widget_add_accelerator (btn_about, "clicked", accel_group,
                              GDK_Escape, 0,
                              GTK_ACCEL_VISIBLE);

  gtk_signal_connect (GTK_OBJECT (btn_about), "clicked",
                      GTK_SIGNAL_FUNC (on_btn_about_clicked),
                      NULL);

  gtk_widget_grab_default (btn_about);
  gtk_window_add_accel_group (GTK_WINDOW (wabout), accel_group);

  return wabout;
}

GtkWidget*
create_wfilesel (void)
{
  GtkWidget *wfilesel;
  GtkWidget *ok_button;
  GtkWidget *cancel_button;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  wfilesel = gtk_file_selection_new ("Select File");
  gtk_object_set_data (GTK_OBJECT (wfilesel), "wfilesel", wfilesel);
  gtk_container_set_border_width (GTK_CONTAINER (wfilesel), 10);

  ok_button = GTK_FILE_SELECTION (wfilesel)->ok_button;
  gtk_object_set_data (GTK_OBJECT (wfilesel), "ok_button", ok_button);
  gtk_widget_show (ok_button);
  GTK_WIDGET_SET_FLAGS (ok_button, GTK_CAN_DEFAULT);

  cancel_button = GTK_FILE_SELECTION (wfilesel)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (wfilesel), "cancel_button", cancel_button);
  gtk_widget_show (cancel_button);
  GTK_WIDGET_SET_FLAGS (cancel_button, GTK_CAN_DEFAULT);
  gtk_widget_add_accelerator (cancel_button, "clicked", accel_group,
                              GDK_W, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);
  gtk_widget_add_accelerator (cancel_button, "clicked", accel_group,
                              GDK_Escape, 0,
                              GTK_ACCEL_VISIBLE);
  gtk_widget_add_accelerator (cancel_button, "clicked", accel_group,
                              GDK_C, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);

  gtk_signal_connect (GTK_OBJECT (ok_button), "clicked",
                      GTK_SIGNAL_FUNC (on_ok_button_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (cancel_button), "clicked",
                      GTK_SIGNAL_FUNC (on_cancel_button_clicked),
                      NULL);

  gtk_window_add_accel_group (GTK_WINDOW (wfilesel), accel_group);

  return wfilesel;
}

GtkWidget*
create_pmenu (void)
{
  GtkWidget *pmenu;
  GtkAccelGroup *pmenu_accels;
  GtkWidget *separator2;
  GtkWidget *pm_opendir;
  GtkWidget *separator4;
  GtkWidget *pm_delete;
  GtkWidget *pm_attribute;

  pmenu = gtk_menu_new ();
  gtk_object_set_data (GTK_OBJECT (pmenu), "pmenu", pmenu);
  pmenu_accels = gtk_menu_ensure_uline_accel_group (GTK_MENU (pmenu));

  separator2 = gtk_menu_item_new ();
  gtk_widget_ref (separator2);
  gtk_object_set_data_full (GTK_OBJECT (pmenu), "separator2", separator2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (separator2);
  gtk_container_add (GTK_CONTAINER (pmenu), separator2);
  gtk_widget_set_sensitive (separator2, FALSE);

  pm_opendir = gtk_menu_item_new_with_label ("Open directory");
  gtk_widget_ref (pm_opendir);
  gtk_object_set_data_full (GTK_OBJECT (pmenu), "pm_opendir", pm_opendir,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pm_opendir);
  gtk_container_add (GTK_CONTAINER (pmenu), pm_opendir);

  separator4 = gtk_menu_item_new ();
  gtk_widget_ref (separator4);
  gtk_object_set_data_full (GTK_OBJECT (pmenu), "separator4", separator4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (separator4);
  gtk_container_add (GTK_CONTAINER (pmenu), separator4);
  gtk_widget_set_sensitive (separator4, FALSE);

  pm_delete = gtk_menu_item_new_with_label ("Delete selected");
  gtk_widget_ref (pm_delete);
  gtk_object_set_data_full (GTK_OBJECT (pmenu), "pm_delete", pm_delete,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pm_delete);
  gtk_container_add (GTK_CONTAINER (pmenu), pm_delete);

  pm_attribute = gtk_menu_item_new_with_label ("Change Attributes");
  gtk_widget_ref (pm_attribute);
  gtk_object_set_data_full (GTK_OBJECT (pmenu), "pm_attribute", pm_attribute,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pm_attribute);
  gtk_container_add (GTK_CONTAINER (pmenu), pm_attribute);

  gtk_signal_connect (GTK_OBJECT (pm_opendir), "activate",
                      GTK_SIGNAL_FUNC (on_pm_opendir_activate),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (pm_delete), "activate",
                      GTK_SIGNAL_FUNC (on_pm_delete),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (pm_attribute), "activate",
                      GTK_SIGNAL_FUNC (on_pm_attribute_activate),
                      NULL);

  return pmenu;
}

GtkWidget*
create_wdirsel (void)
{
  GtkWidget *wdirsel;
  GtkWidget *btn_dir_ok;
  GtkWidget *btn_dir_cancel;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  wdirsel = gtk_file_selection_new ("Select Directory");
  gtk_object_set_data (GTK_OBJECT (wdirsel), "wdirsel", wdirsel);
  gtk_container_set_border_width (GTK_CONTAINER (wdirsel), 4);
  gtk_window_set_position (GTK_WINDOW (wdirsel), GTK_WIN_POS_MOUSE);

  btn_dir_ok = GTK_FILE_SELECTION (wdirsel)->ok_button;
  gtk_object_set_data (GTK_OBJECT (wdirsel), "btn_dir_ok", btn_dir_ok);
  gtk_widget_show (btn_dir_ok);
  GTK_WIDGET_SET_FLAGS (btn_dir_ok, GTK_CAN_DEFAULT);

  btn_dir_cancel = GTK_FILE_SELECTION (wdirsel)->cancel_button;
  gtk_object_set_data (GTK_OBJECT (wdirsel), "btn_dir_cancel", btn_dir_cancel);
  gtk_widget_show (btn_dir_cancel);
  GTK_WIDGET_SET_FLAGS (btn_dir_cancel, GTK_CAN_DEFAULT);
  gtk_widget_add_accelerator (btn_dir_cancel, "clicked", accel_group,
                              GDK_W, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);
  gtk_widget_add_accelerator (btn_dir_cancel, "clicked", accel_group,
                              GDK_Escape, 0,
                              GTK_ACCEL_VISIBLE);
  gtk_widget_add_accelerator (btn_dir_cancel, "clicked", accel_group,
                              GDK_c, GDK_MOD1_MASK,
                              GTK_ACCEL_VISIBLE);

  gtk_signal_connect (GTK_OBJECT (wdirsel), "realize",
                      GTK_SIGNAL_FUNC (on_wdirsel_realize),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (btn_dir_ok), "clicked",
                      GTK_SIGNAL_FUNC (on_btn_dir_ok_clicked),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (btn_dir_cancel), "clicked",
                      GTK_SIGNAL_FUNC (on_btn_dir_cancel_clicked),
                      NULL);

  gtk_window_add_accel_group (GTK_WINDOW (wdirsel), accel_group);

  return wdirsel;
}
