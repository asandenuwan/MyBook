<center><h1>MyBook</h1></center>
<center><h3>A simple book-management desktop application in Python</h3></center>
<hr>

<h2>🚀 Key Features</h2>
<ul>
  <li>Add, edit, and delete book entries.</li>
  <li>Store book details such as title, author, publication date, and description.</li>
  <li>Search books by title or author.</li>
  <li>Save and load your book database (e.g., using JSON or SQLite).</li>
  <li>User-friendly GUI (if using a GUI framework) or command-line interface.</li>
</ul>

<hr>

<h2>🛠️ Requirements</h2>
<ul>
  <li>Python 3.7 or newer</li>
  <li>Optional: GUI library (e.g., PyQt5, Tkinter) if the app has a graphical interface</li>
  <li>SQLite (if persisting data in a database) or file system write permissions</li>
</ul>

<hr>

<h2>📦 Installation & Setup</h2>
<ol>
  <li>Clone or download the repository.</li>
  <li>Install dependencies with:</li>
</ol>
<pre>
pip install -r requirements.txt
</pre>
<ol start="3">
  <li>If you're using a database for storage, initialize it (if required).</li>
  <li>Launch the application with:</li>
</ol>
<pre>
python app.py
</pre>

<hr>

<h2>📖 How to Use</h2>
<ol>
  <li>Open the app.</li>
  <li>To add a new book, click “Add Book” (or run the add command).</li>
  <li>Fill in fields: Title, Author, Published Date, Description.</li>
  <li>Click “Save” to store the book.</li>
  <li>To search for a book, use the search bar or command. Enter part of title or author.</li>
  <li>You can select a book to edit or delete it.</li>
</ol>

<hr>

<h2>🧱 Architecture</h2>
<pre>
+-----------------+
|     app.py      | → Starts the application
+--------+--------+
         |
         v
+-----------------+      +------------------+
|   model.py      | ---> |  Book Data Layer  |
+--------+--------+      +------------------+
         |
         v
+-----------------+      +------------------+
|   gui.py        | ---> |  GUI Interface    |
+-----------------+      +------------------+
</pre>

<hr>

<h2>🔍 Internal Workings</h2>
<ul>
  <li>The core book data is represented as Python objects or records.</li>
  <li>On save, data is serialized (e.g., to JSON or SQLite).</li>
  <li>Search queries filter the in-memory list of books and update the view.</li>
  <li>CRUD operations (Create, Read, Update, Delete) are handled by separate modules for clarity.</li>
</ul>

<hr>

<h2>🚑 Troubleshooting</h2>
<ul>
  <li><strong>App won’t start:</strong><br>
      - Check if Python is installed correctly.<br>
      - Make sure required libraries are installed.</li>
  <li><strong>Saving fails:</strong><br>
      - Confirm write permissions to the folder.<br>
      - If using a database, ensure it's initialized.</li>
  <li><strong>Search returns no results:</strong><br>
      - Verify the search query.<br>
      - Make sure book entries are already added.</li>
  <li><strong>GUI issues:</strong><br>
      - Ensure the GUI library (PyQt5 / Tkinter) is compatible and installed.</li>
</ul>

<hr>

<h2>💡 Future Improvements</h2>
<ul>
  <li>Add user authentication / login system</li>
  <li>Support for book cover images (upload + display)</li>
  <li>Export and import book list (CSV, JSON)</li>
  <li>Advanced search & filter (by genre, date, author)</li>
  <li>Cloud sync (save library to cloud storage)</li>
</ul>

<hr>

<h2>📜 License</h2>
<p>This project is <strong>MIT Licensed</strong>. See the <code>LICENSE</code> file for full details.</p>

<hr>

<h2>✉️ Contact</h2>
<p>Created by <strong>Asan Denuwan</strong>. Contributions & feedback welcome!</p>
