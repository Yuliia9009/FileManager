# Multithreaded File Manager

## Description

The Multithreaded File Manager is a C++ application that allows users to perform various file operations such as copying, moving, deleting, and viewing directory contents. It leverages multithreading to enhance the performance of file operations by processing them in parallel.

## Project Structure

The project consists of the following classes:

> - **File:** Represents a file.
> - **Directory:** Represents a directory.
> - **FileManager:** Manages file and directory operations.
> - **Console:** Manages console input/output and user interaction.

## Usage

> - **Copy File:** Allows the user to copy a file from a source path to a destination path.
> - **Move File:** Allows the user to move a file from a source path to a destination path.
> - **Delete File:** Allows the user to delete a file at a specified path.
> - **Display Directory Contents:** Allows the user to display the contents of a directory.
> - **Exit:** Exits the application.

## Example
```
File Manager Menu:
1. Copy File
2. Move File
3. Delete File
4. Display Directory Contents
5. Exit
Enter choice: 4
Enter directory path: /path/to/directory
Contents of /path/to/directory:
File: file1.txt
File: file2.txt
Directory: .vscode
```

#

# Многопоточный Файловый Менеджер

## Описание

Многопоточный файловый менеджер — это приложение на C++, которое позволяет пользователям выполнять различные операции с файлами, такие как копирование, перемещение, удаление и просмотр содержимого директорий. Оно использует многопоточность для повышения производительности операций с файлами за счет их параллельной обработки.

## Структура проекта

Проект состоит из следующих классов:

> - **File:** Представляет файл.
> - **Directory:** Представляет директорию.
> - **FileManager:** Управляет операциями с файлами и директориями.
> - **Console:** Управляет вводом/выводом консоли и взаимодействием с пользователем.

## Использование

> - **Копирование файла:** Позволяет пользователю скопировать файл из исходного пути в указанный путь назначения.
> - **Перемещение файла:** Позволяет пользователю переместить файл из исходного пути в указанный путь назначения.
> - **Удаление файла:** Позволяет пользователю удалить файл по указанному пути.
> - **Просмотр содержимого директории:** Позволяет пользователю отобразить содержимое директории.
> - **Выход:** Завершает работу приложения.

## Пример

```
File Manager Menu:
1. Copy File
2. Move File
3. Delete File
4. Display Directory Contents
5. Exit
Enter choice: 4
Enter directory path: /path/to/directory
Contents of /path/to/directory:
File: file1.txt
File: file2.txt
Directory: .vscode
```
