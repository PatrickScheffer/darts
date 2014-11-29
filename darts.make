core                                    = 7.x
api                                     = 2
defaults[projects][subdir]              = contrib

projects[kw_manifests][type]            = "module"
projects[kw_manifests][download][type]  = "git"
projects[kw_manifests][download][url]   = "git://github.com/kraftwagen/kw-manifests.git"
projects[kw_manifests][subdir]          = "kraftwagen"

projects[kw_itemnames][type]            = "module"
projects[kw_itemnames][download][type]  = "git"
projects[kw_itemnames][download][url]   = "git://github.com/kraftwagen/kw-itemnames.git"
projects[kw_itemnames][subdir]          = "kraftwagen"

projects[token][version]                = "1.5"

projects[entity][version]               = "1.5"

projects[ctools][version]               = "1.4"

projects[features][version]             = "2.2"

projects[strongarm][version]            = "2.0"

projects[libraries][version]            = "2.2"

projects[field_group][version]          = "1.4"

projects[transliteration][version]      = "3.2"

projects[pathauto][version]             = "1.2"

projects[views][version]                = "3.8"

projects[field_extract][version]        = "1.x-dev"

projects[devel][subdir]                 = "devel"
projects[devel][version]                = "1.5"

projects[stage_file_proxy][subdir]      = "devel"
projects[stage_file_proxy][version]     = "1.5"

projects[diff][subdir]                  = "devel"
projects[diff][version]                 = "3.2"

projects[panels][version]               = "3.4"

projects[panelizer][version]            = "3.1"

projects[local_tasks_blocks][version]   = "2.2"

projects[link][version]                 = "1.2"

projects[libraries][version]            = "2.2"

projects[wysiwyg][version]              = "2.x-dev"

projects[imce][version]                 = "1.9"

projects[imce_wysiwyg][version]         = "1.0"

libraries[ckeditor][download][type]     = "file"
libraries[ckeditor][download][url]      = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.4.2/ckeditor_4.4.2_full.zip"

projects[paragraphs][version]           = "1.0-beta4"

projects[smart_trim][version]           = "1.4"

projects[views_content_cache][version]  = "3.0-alpha3"

projects[backup_migrate][version]       = "3.0"

projects[role_export][version]          = "1.0"

projects[entityreference][version]      = "1.1"

projects[entitycache][version]          = "1.2"

projects[realname][version]             = "1.2"

projects[conditional_styles][version]   = "2.2"

projects[pathologic][version]           = "2.12"

projects[link_css][version]             = "1.0"

projects[redirect][version]             = "1.0-rc1"
projects[redirect][patch][1796596]      = "https://www.drupal.org/files/issues/redirect.circular-loops.1796596-146.patch"

projects[google_analytics][version]     = "2.0"

projects[globalredirect][version]       = "1.5"

projects[xmlsitemap][version]           = "2.0"

projects[metatag][version]              = "1.0-rc2"

projects[advagg][version]               = "2.7"

; VDMi Review, adds coder
; projects[vdmi_review][type]            = "module"
; projects[vdmi_review][download][type]  = "git"
; projects[vdmi_review][download][url]   = "git@git.vdmi.nl:vdmi-kraftwagen/review.git"
; projects[vdmi_review][download][tag]   = "v0.1"
; projects[vdmi_review][subdir]          = "vdmi"
