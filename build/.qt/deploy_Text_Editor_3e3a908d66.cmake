include("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Text Editor/build/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/Text_Editor-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Text Editor/build/Text_Editor.exe"
    GENERATE_QT_CONF
)
